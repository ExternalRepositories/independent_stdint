#include "../independent_int.h"

int main(void)
{
    //regular stdint usage
    uint8_t u_number = 42;

    //convert stdint to matching independent int
    iuint_8_t iu_number = fill_iuint_8(&u_number);

    //now you can use the independent int freely to for example: write/read to file for correct serialization

    //simply convert independent int back to stdint
    uint8_t u_number_copy = get_iuint_8_value(&iu_number);


    if (u_number != u_number_copy)
    {
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}