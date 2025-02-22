#include <iostream>

// COMPANY : PRODUCT
struct MassAndDistance_1
{
    double m1;
    double m2;
    double r;
};

// COMPANY : PRODUCT
class MassAndDistance_2
{
    double m1;
    double m2;
    double r;
};

int main(void)
{
    using std::cout;
    using std::endl;

    // Client
    struct MassAndDistance_1 X1_AN;
    MassAndDistance_2 X2_AN;

    X1_AN.m1 = 1.1;
    X1_AN.m2 = 2.2;
    X1_AN.r = 3.3;

    X2_AN.m1 = 1.1;
    X2_AN.m2 = 2.2;
    X2_AN.r = 3.3;

    return 0;
}
