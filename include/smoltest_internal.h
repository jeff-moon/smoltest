#ifndef SMOLTEST_INTERNAL_H
#define SMOLTEST_INTERNAL_H

#include <string.h>

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)


#define FUNC_NAME(group, test) (smoltest_##group##_##test)
typedef int (*smoltest_func) (void);

int smoltest_eqU32(const char *filename, int line, unsigned int val1, unsigned int val2);
int smoltest_eqU16(const char *filename, int line, unsigned short val1, unsigned short val2);
int smoltest_eqU8(const char *filename, int line, unsigned char val1, unsigned char val2);
int smoltest_eqS32(const char *filename, int line, int val1, int val2);
int smoltest_eqS16(const char *filename, int line, short val1, short val2);
int smoltest_eqS8(const char *filename, int line, char val1, char val2);
int smoltest_eqfloat(const char *filename, int line, float val1, float val2);
int smoltest_eqdouble(const char *filename, int line, double val1, double val2);

#endif