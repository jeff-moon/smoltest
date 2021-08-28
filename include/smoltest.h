/**
 * @file smoltest.h
 * @author Jeffrey Moon (moon.jeffreyw@gmail.com)
 * @brief Defines the public interface for the smoltest suite
 * @version 0.1
 * @date 2021-08-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef SMOLTEST_H
#define SMOLTEST_H

#include "smoltest_internal.h"

/**
 * @brief Defines a smoltest suite test
 * 
 */
#define SMOLTEST(group, test) int FUNC_NAME(group, test) (void) { int smoltest_error_count = 0;

/**
 * @brief Ends the smoltest suite test
 * 
 */
#define ENDTEST() } return smoltest_error_count

/**
 * @brief Registers a smoltest suite test
 * 
 */
#define REGISTER(group, test) (register_test(FUNC_NAME(group, test)))

/**
 * @brief Asserts two unsigned 32-bit integers are equal and returns if assertion fails.
 * 
 */
#define ASSERT_EQ_U32(val1, val2) if (!smoltest_eqU32(__FILENAME__, __LINE__, val1, val2)) return ++smoltest_error_count

/**
 * @brief Expects two unsigned 32-bit to be equal. Does not return if assertion fails.
 * 
 */
#define EXPECT_EQ_U32(val1, val2) if (!smoltest_eqU32(__FILENAME__, __LINE__, val1, val2)) ++smoltest_error_count

/**
 * @brief Asserts two unsigned 16-bit integers are equal and returns if assertion fails.
 * 
 */
#define ASSERT_EQ_U16(val1, val2) if (!smoltest_eqU16(__FILENAME__, __LINE__, val1, val2)) return ++smoltest_error_count

/**
 * @brief Expects two unsigned 16-bit to be equal. Does not return if assertion fails.
 * 
 */
#define EXPECT_EQ_U16(val1, val2) if (!smoltest_eqU16(__FILENAME__, __LINE__, val1, val2)) ++smoltest_error_count

/**
 * @brief Asserts two unsigned 8-bit integers are equal and returns if assertion fails.
 * 
 */
#define ASSERT_EQ_U8(val1, val2) if (!smoltest_eqU8(__FILENAME__, __LINE__, val1, val2)) return ++smoltest_error_count

/**
 * @brief Expects two unsigned 8-bit to be equal. Does not return if assertion fails.
 * 
 */
#define EXPECT_EQ_U8(val1, val2) if (!smoltest_eqU8(__FILENAME__, __LINE__, val1, val2)) ++smoltest_error_count

/**
 * @brief Asserts two signed 32-bit integers are equal and returns if assertion fails.
 * 
 */
#define ASSERT_EQ_S32(val1, val2) if (!smoltest_eqS32(__FILENAME__, __LINE__, val1, val2)) return ++smoltest_error_count

/**
 * @brief Expects two signed 32-bit to be equal. Does not return if assertion fails.
 * 
 */
#define EXPECT_EQ_S32(val1, val2) if (!smoltest_eqS32(__FILENAME__, __LINE__, val1, val2)) ++smoltest_error_count

/**
 * @brief Asserts two signed 16-bit integers are equal and returns if assertion fails.
 * 
 */
#define ASSERT_EQ_S16(val1, val2) if (!smoltest_eqS16(__FILENAME__, __LINE__, val1, val2)) return ++smoltest_error_count

/**
 * @brief Expects two signed 16-bit to be equal. Does not return if assertion fails.
 * 
 */
#define EXPECT_EQ_S16(val1, val2) if (!smoltest_eqS16(__FILENAME__, __LINE__, val1, val2)) ++smoltest_error_count

/**
 * @brief Asserts two signed 8-bit integers are equal and returns if assertion fails.
 * 
 */
#define ASSERT_EQ_S8(val1, val2) if (!smoltest_eqS8(__FILENAME__, __LINE__, val1, val2)) return ++smoltest_error_count

/**
 * @brief Expects two signed 8-bit to be equal. Does not return if assertion fails.
 * 
 */
#define EXPECT_EQ_S8(val1, val2) if (!smoltest_eqS8(__FILENAME__, __LINE__, val1, val2)) ++smoltest_error_count

/**
 * @brief Asserts two doubles are equal and returns if assertion fails.
 * 
 */
#define ASSERT_EQ_DOUBLE(val1, val2) if (!smoltest_eqdouble(__FILENAME__, __LINE__, val1, val2)) return ++smoltest_error_count

/**
 * @brief Expects two doubles to be equal. Does not return if assertion fails.
 * 
 */
#define EXPECT_EQ_DOUBLE(val1, val2) if (!smoltest_eqdouble(__FILENAME__, __LINE__, val1, val2)) ++smoltest_error_count

/**
 * @brief Asserts two floats are equal and returns if assertion fails.
 * 
 */
#define ASSERT_EQ_FLOAT(val1, val2) if (!smoltest_eqfloat(__FILENAME__, __LINE__, val1, val2)) return ++smoltest_error_count

/**
 * @brief Expects two floats to be equal. Does not return if assertion fails.
 * 
 */
#define EXPECT_EQ_FLOAT(val1, val2) if (!smoltest_eqfloat(__FILENAME__, __LINE__, val1, val2)) ++smoltest_error_count

/**
 * @brief Asserts two strings are equal and returns if assertion fails.
 *
 */
#define ASSERT_EQ_STRING(val1, val2) if (!smoltest_eqstring(__FILENAME__, __LINE__, val1, val2)) return ++smoltest_error_count

/**
 * @brief Expects two strings are equal and returns if assertion fails.
 *
 */
#define EXPECT_EQ_STRING(val1, val2) if (!smoltest_eqstring(__FILENAME__, __LINE__, val1, val2)) ++smoltest_error_count

/**
 * @brief Asserts a pointer to be null
 * 
 */
#define ASSERT_NULL(ptr) if (!smoltest_null(__FILENAME__, __LINE__, ptr)) return ++smoltest_error_count

/**
 * @brief Expects a pointer to be null
 * 
 */
#define EXPECT_NULL(ptr) if (!smoltest_null(__FILENAME__, __LINE__, ptr)) ++smoltest_error_count

/**
 * @brief Asserts a pointer to be not null
 * 
 */
#define ASSERT_NOT_NULL(ptr) if (!smoltest_notnull(__FILENAME__, __LINE__, ptr)) return ++smoltest_error_count

/**
 * @brief Expects a pointer to be not null
 * 
 */
#define EXPECT_NOT_NULL(ptr) if (!smoltest_notnull(__FILENAME__, __LINE__, ptr)) ++smoltest_error_count

/**
 * @brief Registers a test function with the smoltest system. Use REGISTER() instead.
 * 
 * @param f The test function to register
 */
void register_test(smoltest_func f);

/**
 * @brief Runs the smoltest suite
 * 
 */
void smoltest_run();

#endif