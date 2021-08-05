#include "smoltest.h"
#include <stdio.h>

#ifndef MAX_TESTS
#define MAX_TESTS 100
#endif

typedef struct {
    int failure_count;
    int test_count;
    smoltest_func funcs[MAX_TESTS];
} smoltest_data_t;

static smoltest_data_t data = {};

void register_test(smoltest_func f) {
    if (data.test_count == MAX_TESTS) {
        printf("[ SETUP ERROR ] Too many tests defined. Compile with -DMAX_TESTS=<test_count> to increase maximum number of tests\n");
        return;
    }

    data.funcs[data.test_count] = f; 
    data.test_count += 1;
}

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