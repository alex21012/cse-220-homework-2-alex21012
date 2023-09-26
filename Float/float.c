#include <stdio.h>


float construct_float_sf(char sign_bit, char exponent, unsigned int fraction) {
    /* DO NOT CHANGE THE DECLARATION OF "f" (This will be converted to float later) */
    unsigned int f = 0; // DO NOT CHANGE
    /*------------------------------------------------------------------------------*/
    
    /* Start Coding Here */
    f |= (sign_bit & 0x01) << 31;
    f |= ((unsigned int)exponent & 0xFF) << 23;
    f |= fraction & 0x7FFFFF;
    /*-------------------*/
    
    /* DO NOT CHANGE THE RETURN VALUE (This returns the binary representation of "f" as float) */
    return *((float*)&f); // DO NOT CHANGE
    /* ----------------------------------------------------------------------------------------*/
}

int main(int argc, char* argv[])
{
    (void) argc; // to supress compiler warning
    (void)argv;  // to supress compiler warning   
    printf("f = %g\n", construct_float_sf(0x00, 0x00, 0x000000));
    printf("f = %g\n", construct_float_sf(0x00, 0x81, 0x300000)); // Expected output: 5.5
    printf("f = %g\n", construct_float_sf(0x01, 0x81, 0x300000)); // Expected output: -5.5
    printf("f = %g\n", construct_float_sf(0x01, 0x81, 0x300000)); // Expected output: -5.5
    printf("f = %g\n", construct_float_sf(0x00, 0x7F, 0x200000)); // Expected output: 1.25
    printf("f = %g\n", construct_float_sf(0x00, 0x76, 0x299B6F)); // Expected output: 0.002588
    return 0;
}
