#include "smoltest_internal.h"
#include <stdio.h>

#define ERRSTRLEN (100)

int smoltest_eqU32(const char *filename, int line, unsigned int val1, unsigned int val2) {
    int eq = val1 == val2;

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: %u != %u\n", filename, line, val1, val2);
    }

    return eq;
}

int smoltest_eqU16(const char *filename, int line, unsigned short val1, unsigned short val2) {
    int eq = val1 == val2;

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: %u != %u\n", filename, line, val1, val2);
    }

    return eq;
}

int smoltest_eqU8(const char *filename, int line, unsigned char val1, unsigned char val2) {
    int eq = val1 == val2;

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: %u != %u\n", filename, line, val1, val2);
    }

    return eq;
}

int smoltest_eqS32(const char *filename, int line, int val1, int val2) {
    int eq = val1 == val2;

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: %d != %d\n", filename, line, val1, val2);
    }

    return eq;
}

int smoltest_eqS16(const char *filename, int line, short val1, short val2) {
    int eq = val1 == val2;

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: %d != %d\n", filename, line, val1, val2);
    }

    return eq;
}

int smoltest_eqS8(const char *filename, int line, char val1, char val2) {
    int eq = val1 == val2;

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: %d != %d\n", filename, line, val1, val2);
    }

    return eq;
}

int smoltest_eqfloat(const char *filename, int line, float val1, float val2) {
    int eq = val1 == val2;

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: %f != %f\n", filename, line, val1, val2);
    }

    return eq;
}

int smoltest_eqdouble(const char *filename, int line, double val1, double val2) {
    int eq = val1 == val2;

    if (!eq) {
        printf("[ ASSERT FAIL ] %s:%d: %f != %f\n", filename, line, val1, val2);
    }

    return eq;
}
