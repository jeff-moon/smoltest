#ifndef SMOLTEST_H
#define SMOLTEST_H

#include "smoltest_internal.h"

#define SMOLTEST(group, test) int FUNC_NAME(group, test) (void) { int smoltest_error_count = 0;
#define ENDTEST() } return smoltest_error_count
#define REGISTER(group, test) (register_test(FUNC_NAME(group, test)))

#define ASSERT_EQ_U32(val1, val2) if (!smoltest_eqU32(__FILENAME__, __LINE__, val1, val2)) return ++smoltest_error_count
#define EXPECT_EQ_U32(val1, val2) if (!smoltest_eqU32(__FILENAME__, __LINE__, val1, val2)) ++smoltest_error_count

#define ASSERT_EQ_U16(val1, val2) if (!smoltest_eqU16(__FILENAME__, __LINE__, val1, val2)) return ++smoltest_error_count
#define EXPECT_EQ_U16(val1, val2) if (!smoltest_eqU16(__FILENAME__, __LINE__, val1, val2)) ++smoltest_error_count

#define ASSERT_EQ_U8(val1, val2) if (!smoltest_eqU8(__FILENAME__, __LINE__, val1, val2)) return ++smoltest_error_count
#define EXPECT_EQ_U8(val1, val2) if (!smoltest_eqU8(__FILENAME__, __LINE__, val1, val2)) ++smoltest_error_count

#define ASSERT_EQ_S32(val1, val2) if (!smoltest_eqS32(__FILENAME__, __LINE__, val1, val2)) return ++smoltest_error_count
#define EXPECT_EQ_S32(val1, val2) if (!smoltest_eqS32(__FILENAME__, __LINE__, val1, val2)) ++smoltest_error_count

#define ASSERT_EQ_S16(val1, val2) if (!smoltest_eqS16(__FILENAME__, __LINE__, val1, val2)) return ++smoltest_error_count
#define EXPECT_EQ_S16(val1, val2) if (!smoltest_eqS16(__FILENAME__, __LINE__, val1, val2)) ++smoltest_error_count

#define ASSERT_EQ_S8(val1, val2) if (!smoltest_eqS8(__FILENAME__, __LINE__, val1, val2)) return ++smoltest_error_count
#define EXPECT_EQ_S8(val1, val2) if (!smoltest_eqS8(__FILENAME__, __LINE__, val1, val2)) ++smoltest_error_count

#define ASSERT_EQ_DOUBLE(val1, val2) if (!smoltest_eqdouble(__FILENAME__, __LINE__, val1, val2)) return ++smoltest_error_count
#define EXPECT_EQ_DOUBLE(val1, val2) if (!smoltest_eqdouble(__FILENAME__, __LINE__, val1, val2)) ++smoltest_error_count

#define ASSERT_EQ_FLOAT(val1, val2) if (!smoltest_eqfloat(__FILENAME__, __LINE__, val1, val2)) return ++smoltest_error_count
#define EXPECT_EQ_FLOAT(val1, val2) if (!smoltest_eqfloat(__FILENAME__, __LINE__, val1, val2)) ++smoltest_error_count

void register_test(smoltest_func f);
void smoltest_run();

#endif