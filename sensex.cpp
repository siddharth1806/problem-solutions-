#include <stdio.h>
int main()
{
    float pi1 = 3.142, pi2 = 0.3142E1, pi3 = 3142E-3;

    float f = 12345.678901234567890;
    double d = 12345.678901324567890;
    float sensex1 = 25341.86;
    float sensex2, gain;

    printf("pi1 = %f, pi2 = %e, pi3 = %g\n", pi1, pi2, pi3);
    printf("f = %.15f\n", f);
    printf("d = %.15f\n", d);

    //uncomment the following commented lines if your computer supports long double

    //long double ld = 13245.678901234567890;
    //printf("ld = %.20Lf\n", ld);

    sensex2 = 46556.25;

    gain = (sensex2 - sensex1) / sensex1 * 100;
    printf("Sensex returns since March 31 : %f%%\n", gain);

    return 0;
}