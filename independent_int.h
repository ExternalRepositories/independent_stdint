#ifndef INDEPENDENT_INT_H
#define INDEPENDENT_INT_H

#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>

#if 43981 != 0xABCD
#define BIG_ENDIAN_INDINT
#endif

#define fill_x(x) { \
    x* tmp = (x*) fill_ixint_x(in, sizeof(x));\
    x value = *tmp;\
    free(tmp);\
    return value;\
    }\

#define get_value(x)  { \
    x* tmp = (x*) get_ixint_x_value(in, sizeof(x));\
    x value = *tmp;\
    free(tmp);\
    return value;\
    }\

typedef union
{
    uint8_t get_value;
    uint8_t bytes[1];
} iuint_8_t;

typedef union
{
    uint16_t get_value;
    uint8_t bytes[2];
} iuint_16_t;

typedef union
{
    uint32_t get_value;
    uint8_t bytes[4];
} iuint_32_t;

typedef union
{
    uint64_t get_value;
    uint8_t bytes[8];
} iuint_64_t;

typedef union
{
    int8_t get_value;
    uint8_t bytes[1];
} iint_8_t;

typedef union
{
    int16_t get_value;
    uint8_t bytes[2];
} iint_16_t;

typedef union
{
    int32_t get_value;
    uint8_t bytes[4];
} iint_32_t;

typedef union
{
    int64_t get_value;
    uint8_t bytes[8];
} iint_64_t;

void* fill_ixint_x(const void* in, uint8_t size_of_ixint)
{
    void* return_value = calloc(size_of_ixint, 1);
    if (return_value != NULL)
    {
        for (size_t i = 0U; i < size_of_ixint; ++i)
        {
            ((uint8_t*) return_value)[i] = ((uint8_t*) in)[
#ifdef BIG_ENDIAN_INDINT
                    size_of_ixint - i - 1
#else
                    i
#endif
            ];
        }
    }
    return return_value;
}

void* get_ixint_x_value(const void* ixint_in, uint8_t size_of_ixint)
{
    void* return_value = calloc(size_of_ixint, 1);
    if (return_value != NULL)
    {
        for (size_t i = 0U; i < size_of_ixint; ++i)
        {
            ((uint8_t*) return_value)[i] = ((uint8_t*) ixint_in)[
#ifdef BIG_ENDIAN_INDINT
                    size_of_ixint - i - 1
#else
                    i
#endif
            ];
        }
    }
    return return_value;
}


iuint_8_t fill_iuint_8(const uint8_t* in)
{
    fill_x(iuint_8_t)
}

uint8_t get_iuint_8_value(const iuint_8_t* in)
{
    get_value(uint8_t);
}

iuint_16_t fill_iuint_16(const uint16_t* in)
{
    fill_x(iuint_16_t)
}

uint16_t get_iuint_16_value(const iuint_16_t* in)
{
    get_value(uint16_t)
}

iuint_32_t fill_iuint_32(const uint32_t* in)
{
    fill_x(iuint_32_t)
}

uint32_t get_iuint_32_value(const iuint_32_t* in)
{
    get_value(uint32_t)
}

iuint_64_t fill_iuint_64(const uint64_t* in)
{
    fill_x(iuint_64_t)
}

uint64_t get_iuint_64_value(const iuint_64_t* in)
{
    get_value(uint64_t)
}

iint_8_t fill_iint_8(const int8_t* in)
{
    fill_x(iint_8_t)
}

int8_t get_iint_8_value(const iint_8_t* in)
{
    get_value(int8_t)
}

iint_16_t fill_iint_16(const int16_t* in)
{
    fill_x(iint_16_t)
}

int16_t get_iint_16_value(const iint_16_t* in)
{
    get_value(int16_t)
}

iint_32_t fill_iint_32(const int32_t* in)
{
    fill_x(iint_32_t)
}

int32_t get_iint_32_value(const iint_32_t* in)
{
    get_value(int32_t)
}

iint_64_t fill_iint_64(const int64_t* in)
{
    fill_x(iint_64_t)
}

int64_t get_iint_64_value(const iint_64_t* in)
{
    get_value(int64_t)
}

#endif //INDEPENDENT_INT_H
