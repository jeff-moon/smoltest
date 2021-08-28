/**
 * @file smoltest_internal.c
 * @author Jeffrey Moon (moon.jeffreyw@gmail.com)
 * @brief Internal interface for smoltest system
 * @version 0.1
 * @date 2021-08-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "smoltest_internal.h"
#include <stdio.h>

#define ERRSTRLEN (100)

/**
 * @brief Performs equality between unsigned 32-bit integers
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param val1 Value 1 to check
 * @param val2 Value 2 to check
 * @return int where 1 = equal and 0 = not equal
 */
int smoltest_eqU32(const char *filename, int line, unsigned int val1, unsigned int val2) {
    int eq = val1 == val2;

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: %u != %u\n", filename, line, val1, val2);
    }

    return eq;
}

/**
 * @brief Performs equality between unsigned 16-bit integers
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param val1 Value 1 to check
 * @param val2 Value 2 to check
 * @return int where 1 = equal and 0 = not equal
 */
int smoltest_eqU16(const char *filename, int line, unsigned short val1, unsigned short val2) {
    int eq = val1 == val2;

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: %u != %u\n", filename, line, val1, val2);
    }

    return eq;
}

/**
 * @brief Performs equality between unsigned 8-bit integers
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param val1 Value 1 to check
 * @param val2 Value 2 to check
 * @return int where 1 = equal and 0 = not equal
 */
int smoltest_eqU8(const char *filename, int line, unsigned char val1, unsigned char val2) {
    int eq = val1 == val2;

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: %u != %u\n", filename, line, val1, val2);
    }

    return eq;
}

/**
 * @brief Performs equality between signed 32-bit integers
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param val1 Value 1 to check
 * @param val2 Value 2 to check
 * @return int where 1 = equal and 0 = not equal
 */
int smoltest_eqS32(const char *filename, int line, int val1, int val2) {
    int eq = val1 == val2;

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: %d != %d\n", filename, line, val1, val2);
    }

    return eq;
}

/**
 * @brief Performs equality between signed 16-bit integers
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param val1 Value 1 to check
 * @param val2 Value 2 to check
 * @return int where 1 = equal and 0 = not equal
 */
int smoltest_eqS16(const char *filename, int line, short val1, short val2) {
    int eq = val1 == val2;

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: %d != %d\n", filename, line, val1, val2);
    }

    return eq;
}

/**
 * @brief Performs equality between signed 8-bit integers
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param val1 Value 1 to check
 * @param val2 Value 2 to check
 * @return int where 1 = equal and 0 = not equal
 */
int smoltest_eqS8(const char *filename, int line, char val1, char val2) {
    int eq = val1 == val2;

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: %d != %d\n", filename, line, val1, val2);
    }

    return eq;
}

/**
 * @brief Performs equality between floats
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param val1 Value 1 to check
 * @param val2 Value 2 to check
 * @return int where 1 = equal and 0 = not equal
 */
int smoltest_eqfloat(const char *filename, int line, float val1, float val2) {
    int eq = val1 == val2;

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: %f != %f\n", filename, line, val1, val2);
    }

    return eq;
}

/**
 * @brief Performs equality between doubles
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param val1 Value 1 to check
 * @param val2 Value 2 to check
 * @return int where 1 = equal and 0 = not equal
 */
int smoltest_eqdouble(const char *filename, int line, double val1, double val2) {
    int eq = val1 == val2;

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: %f != %f\n", filename, line, val1, val2);
    }

    return eq;
}

/**
 * @brief Performs equality between strings
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param val1 Value 1 to check
 * @param val2 Value 2 to check
 * @return int where 1 = equal and 0 = not equal
 */
int smoltest_eqstring(const char *filename, int line, const char *val1, const char *val2) {
    int eq = !strcmp(val1, val2);

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: %s != %s\n", filename, line, val1, val2);
    }

    return eq;
}

/**
 * @brief Performs a null check
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param ptr The pointer to null check
 * @return int where 1 = NULL and 0 = not NULL
 */
int smoltest_null(const char *filename, int line, const void *ptr) {
    int eq = (ptr == NULL);

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: Pointer is not NULL\n", filename, line);
    }

    return eq;
}

/**
 * @brief Performs a null check
 * 
 * @param filename The filename in which the equality check was performed
 * @param line The line number on which the equality check was performed
 * @param ptr The pointer to null check
 * @return int where 1 = not NULL and 0 = NULL
 */
int smoltest_notnull(const char *filename, int line, const void *ptr) {
    int eq = (ptr != NULL);

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: Pointer is NULL\n", filename, line);
    }

    return eq;
}
