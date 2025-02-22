#include <stdio.h>

int main(void)
{
    double m1_AN;                  // For Storing Mass of Object 1
    double m2_AN;                  // For Storing Mass of Object 2
    double r_AN;                   // For Storing Mass of Object 3
    double G_AN = 6.67 * 10e-11;   // Universal constant of gravitation
    double F_AN;                   // For Storing Gravitational Force of Attraction

    printf("\nEnter Mass of Object 1 in kgs : ");
    scanf("%lf", &m1_AN);

    printf("Enter Mass of Object 2 in kgs : ");
    scanf("%lf", &m2_AN);

    printf("Enter the distance between the objects in metres : ");
    scanf("%lf", &r_AN);

    if (m1_AN <= 0.0 || m2_AN <= 0.0 || r_AN <= 0.0)
    {
        printf("Invalid values for mass or distance !!!\n");
        return -1;
    }

    F_AN = (G_AN * m1_AN * m2_AN) / (r_AN * r_AN);
    printf("Gravitational force of attraction = %lf Newtons\n", F_AN);

    return 0;
}
