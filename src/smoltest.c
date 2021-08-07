/**
 * @file smoltest.c
 * @author Jeffrey Moon (moon.jeffreyw@gmail.com)
 * @brief The smoltest registration/run interface
 * @version 0.1
 * @date 2021-08-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "smoltest.h"
#include <stdio.h>

#ifndef MAX_TESTS
#define MAX_TESTS 100
#endif

/**
 * @brief The overall test data
 * 
 */
typedef struct {
    int failure_count;
    int test_count;
    smoltest_func funcs[MAX_TESTS];
    
} smoltest_data_t;

/**
 * @brief The static instance of the test data
 * 
 */
static smoltest_data_t data = {};

/**
 * @brief Registers a test function with the smoltest system
 * 
 * @param f The test function to register
 */
void register_test(smoltest_func f) {
    if (data.test_count == MAX_TESTS) {
        printf("[ SETUP ERROR ] Too many tests defined. Compile with -DMAX_TESTS=<test_count> to increase maximum number of tests\n");
        return;
    }

    data.funcs[data.test_count] = f; 
    data.test_count += 1;
}

/**
 * @brief Runs the smoltest suite
 * 
 */
void smoltest_run() {
    int i;
    int result;

    for (i = 0; i < data.test_count; i++) {
        result = data.funcs[i]();

        if (result > 0) {
            data.failure_count += 1;
        }
    }

    printf("[ SMOLTEST ] Test Suite Complete\n");
    printf("[ SMOLTEST ] %d / %d Tests Passed\n", data.test_count - data.failure_count, data.test_count);
}