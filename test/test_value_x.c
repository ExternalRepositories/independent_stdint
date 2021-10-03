#include "../independent_stdint.h"

//tests return 0 if correct!

int test_iuint_8(void);

int test_iuint_16(void);

int test_iuint_32(void);

int test_iuint_64(void);

int test_iint_8(void);

int test_iint_16(void);

int test_iint_32(void);

int test_iint_64(void);


int main(void)
{
    return test_iuint_8() + test_iuint_16() + test_iuint_32() + test_iuint_64() + test_iint_8() + test_iint_16() +
           test_iint_32() + test_iint_64();
}

int test_iuint_8_value(uint8_t test_value)
{
    iuint_8_t test_iuint = fill_iuint_8(&test_value);
    uint8_t copy_test_value = get_iuint_8_value(&test_iuint);
    return test_value != copy_test_value;
}

int test_iuint_8(void)
{
    int test_sum = 0U;
    test_sum += test_iuint_8_value(0U);
    test_sum += test_iuint_8_value(0xFF);
    test_sum += test_iuint_8_value(0x12);
    test_sum += test_iuint_8_value(0x42);
    return test_sum;
}

int test_iuint_16_value(uint16_t test_value)
{
    iuint_16_t test_iuint = fill_iuint_16(&test_value);
    uint16_t copy_test_value = get_iuint_16_value(&test_iuint);
    return test_value != copy_test_value;
}

int test_iuint_16(void)
{
    int test_sum = 0U;
    test_sum += test_iuint_16_value(0U);
    test_sum += test_iuint_16_value(0xFF);
    test_sum += test_iuint_16_value(0xFFFF);
    test_sum += test_iuint_16_value(0x1234);
    test_sum += test_iuint_16_value(0x4273);
    return test_sum;
}

int test_iuint_32_value(uint32_t test_value)
{
    iuint_32_t test_iuint = fill_iuint_32(&test_value);
    uint32_t copy_test_value = get_iuint_32_value(&test_iuint);
    return test_value != copy_test_value;
}

int test_iuint_32(void)
{
    int test_sum = 0U;
    test_sum += test_iuint_32_value(0U);
    test_sum += test_iuint_32_value(0xFF);
    test_sum += test_iuint_32_value(0xFFFF);
    test_sum += test_iuint_32_value(0xFFFFFF);
    test_sum += test_iuint_32_value(0xFFFFFFFF);
    test_sum += test_iuint_32_value(0x12345678);
    test_sum += test_iuint_32_value(0x4273BADC);
    return test_sum;
}

int test_iuint_64_value(uint64_t test_value)
{
    iuint_64_t test_iuint = fill_iuint_64(&test_value);
    uint64_t copy_test_value = get_iuint_64_value(&test_iuint);
    return test_value != copy_test_value;
}

int test_iuint_64(void)
{
    int test_sum = 0U;
    test_sum += test_iuint_64_value(0U);
    test_sum += test_iuint_64_value(0xFF);
    test_sum += test_iuint_64_value(0xFFFF);
    test_sum += test_iuint_64_value(0xFFFFFF);
    test_sum += test_iuint_64_value(0xFFFFFFFF);
    test_sum += test_iuint_64_value(0xFFFFFFFFFF);
    test_sum += test_iuint_64_value(0xFFFFFFFFFFFF);
    test_sum += test_iuint_64_value(0xFFFFFFFFFFFFFF);
    test_sum += test_iuint_64_value(0xFFFFFFFFFFFFFFFF);
    test_sum += test_iuint_64_value(0x123456789ABCDEF0);
    test_sum += test_iuint_64_value(0x984324ADAFA32344);
    return test_sum;
}

int test_iint_8_value(int8_t test_value)
{
    iint_8_t test_iint = fill_iint_8(&test_value);
    int8_t copy_test_value = get_iint_8_value(&test_iint);
    return test_value != copy_test_value;
}

int test_iint_8(void)
{
    int test_sum = 0U;
    test_sum += test_iint_8_value(0U);
    test_sum += test_iint_8_value(0x1F);
    test_sum += test_iint_8_value(0x12);
    test_sum += test_iint_8_value(0x42);
    return test_sum;
}

int test_iint_16_value(int16_t test_value)
{
    iint_16_t test_iint = fill_iint_16(&test_value);
    int16_t copy_test_value = get_iint_16_value(&test_iint);
    return test_value != copy_test_value;
}

int test_iint_16(void)
{
    int test_sum = 0U;
    test_sum += test_iint_16_value(0U);
    test_sum += test_iint_16_value(0xFF);
    test_sum += test_iint_16_value(0x1FFF);
    test_sum += test_iint_16_value(0x1234);
    test_sum += test_iint_16_value(0x4273);
    return test_sum;
}

int test_iint_32_value(int32_t test_value)
{
    iint_32_t test_iint = fill_iint_32(&test_value);
    int32_t copy_test_value = get_iint_32_value(&test_iint);
    return test_value != copy_test_value;
}

int test_iint_32(void)
{
    int test_sum = 0U;
    test_sum += test_iint_32_value(0U);
    test_sum += test_iint_32_value(0xFF);
    test_sum += test_iint_32_value(0xFFFF);
    test_sum += test_iint_32_value(0xFFFFFF);
    test_sum += test_iint_32_value(0x1FFFFFFF);
    test_sum += test_iint_32_value(0x12345678);
    test_sum += test_iint_32_value(0x4273BADC);
    return test_sum;
}

int test_iint_64_value(int64_t test_value)
{
    iint_64_t test_iint = fill_iint_64(&test_value);
    int64_t copy_test_value = get_iint_64_value(&test_iint);
    return test_value != copy_test_value;
}

int test_iint_64(void)
{
    int test_sum = 0U;
    test_sum += test_iint_64_value(0U);
    test_sum += test_iint_64_value(0xFF);
    test_sum += test_iint_64_value(0xFFFF);
    test_sum += test_iint_64_value(0xFFFFFF);
    test_sum += test_iint_64_value(0xFFFFFFFF);
    test_sum += test_iint_64_value(0xFFFFFFFFFF);
    test_sum += test_iint_64_value(0xFFFFFFFFFFFF);
    test_sum += test_iint_64_value(0xFFFFFFFFFFFFFF);
    test_sum += test_iint_64_value(0x1FFFFFFFFFFFFFFF);
    test_sum += test_iint_64_value(0x123456789ABCDEF0);
    test_sum += test_iint_64_value(0x184324ADAFA32344);
    return test_sum;
}
