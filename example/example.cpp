#include "../independent_int.h"

int main()
{
    uint8_t u_number = 42;
    iuint_8_t iu_number = fill_iuint_8(&u_number);
    //write/read iuint to file
    uint8_t u_number_copy = get_iuint_8_value(&iu_number);
    if (u_number != u_number_copy)
    {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}