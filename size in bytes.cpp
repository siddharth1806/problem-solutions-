#define LOOP_VAR 50
#include <stdio.h>

int main()
{
    char letter = 'A';

    printf("Size in bytes of the fundamental data types on this machine:\n");
    printf("int : %d, long : %d, float : %d, double : %d, long double : %d\n",
            sizeof(int), sizeof(long), sizeof(float), sizeof(double), sizeof(long double));
    printf("Size of constants on this machine:\n");
    printf("Size of 34 = %d bytes\n", sizeof 34);
    printf("Size of 'A' = %d bytes\n", sizeof 'A');
    printf("Size of letter which is set to 'A' = %d bytes\n", sizeof letter);
    printf("Size of 34L = %d bytes\n", sizeof 34L);
    printf("Size of 3.142 = %d bytes\n", sizeof 3.142);
    printf("Size of 3.142F = %d bytes\n", sizeof 3.142F);
    printf("Size of 3.142L = %d bytes\n", sizeof 3.142L);
    printf("Size of LOOP_VAR = %d bytes\n", sizeof(LOOP_VAR));

    printf("Size of string \"Baahubali\" = %d bytes.\n", sizeof("Baahubali"));

    return 0;
}