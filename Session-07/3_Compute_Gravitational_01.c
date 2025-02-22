// Header Files
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Structure Definition
struct MassAndDistance
{
    double m1;
    double m2;
    double r;
};

// Function Declaration
double computeGravitational(struct MassAndDistance *pData);

int main(void)
{
    // Variable Declarations
    struct MassAndDistance earthSun_AN;
    struct MassAndDistance jupiterSun_AN;
    double forceBetweenEarthAndSun_AN;
    double forceBetweenJupiterAndSun_AN;

    // Code
    earthSun_AN.m1 = 1.9891e30; 
    earthSun_AN.m2 = 5.9722e24; 
    earthSun_AN.r = 149597871000; 

    forceBetweenEarthAndSun_AN = computeGravitational(&earthSun_AN);
    printf("Gravitational Force Between The Sun and The Earth = %lf Newton\n", forceBetweenEarthAndSun_AN);

    jupiterSun_AN.m1 = 1.9891e30; 
    jupiterSun_AN.m2 = 1.89813e27; 
    jupiterSun_AN.r = 760070000000; 

    forceBetweenJupiterAndSun_AN = computeGravitational(&jupiterSun_AN);
    printf("Gravitational Force Between The Sun and The Jupiter = %lf Newton\n", forceBetweenJupiterAndSun_AN);

    return 0;
}

double computeGravitational(struct MassAndDistance *pData)
{
    // Variable Declarations
    double G_AN = 6.67 * 10e-11;    // Universal Constant of Gravitation
    double F_AN;                    // For Storing the amount of force in Newton

    // Code
    if (pData->m1 <= 0.0 || pData->m2 <= 0.0 || pData->r <= 0.0)
        return (NAN);
    
    F_AN = (G_AN * pData->m1 * pData->m2) / (pData->r * pData->r);

    return F_AN;
}

