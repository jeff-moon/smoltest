/**
 * @file smoltest_internal.h
 * @author Jeffrey Moon (moon.jeffreyw@gmail.com)
 * @brief Defines public interface for the internal smoltest module
 * @version 0.1
 * @date 2021-08-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef SMOLTEST_INTERNAL_H
#define SMOLTEST_INTERNAL_H

#include <string.h>

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#define FUNC_NAME(group, test) (smoltest_##group##_##test)
typedef int (*smoltest_func) (void);

/**
 * @brief Performs equality between unsigned 32-bit integers
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param val1 Value 1 to check
 * @param val2 Value 2 to check
 * @return int where 1 = equal and 0 = not equal
 */
int smoltest_eqU32(const char *filename, int line, unsigned int val1, unsigned int val2);

/**
 * @brief Performs equality between unsigned 16-bit integers
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param val1 Value 1 to check
 * @param val2 Value 2 to check
 * @return int where 1 = equal and 0 = not equal
 */
int smoltest_eqU16(const char *filename, int line, unsigned short val1, unsigned short val2);

/**
 * @brief Performs equality between unsigned 8-bit integers
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param val1 Value 1 to check
 * @param val2 Value 2 to check
 * @return int where 1 = equal and 0 = not equal
 */
int smoltest_eqU8(const char *filename, int line, unsigned char val1, unsigned char val2);

/**
 * @brief Performs equality between signed 32-bit integers
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param val1 Value 1 to check
 * @param val2 Value 2 to check
 * @return int where 1 = equal and 0 = not equal
 */
int smoltest_eqS32(const char *filename, int line, int val1, int val2);

/**
 * @brief Performs equality between signed 16-bit integers
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param val1 Value 1 to check
 * @param val2 Value 2 to check
 * @return int where 1 = equal and 0 = not equal
 */
int smoltest_eqS16(const char *filename, int line, short val1, short val2);

/**
 * @brief Performs equality between signed 8-bit integers
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param val1 Value 1 to check
 * @param val2 Value 2 to check
 * @return int where 1 = equal and 0 = not equal
 */
int smoltest_eqS8(const char *filename, int line, char val1, char val2);

/**
 * @brief Performs equality between floats
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param val1 Value 1 to check
 * @param val2 Value 2 to check
 * @return int where 1 = equal and 0 = not equal
 */
int smoltest_eqfloat(const char *filename, int line, float val1, float val2);

/**
 * @brief Performs equality between doubles
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param val1 Value 1 to check
 * @param val2 Value 2 to check
 * @return int where 1 = equal and 0 = not equal
 */
int smoltest_eqdouble(const char *filename, int line, double val1, double val2);

#endif