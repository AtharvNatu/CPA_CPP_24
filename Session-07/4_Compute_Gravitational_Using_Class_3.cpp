// Header Files
#include <iostream>
#include <exception>
#include <cmath>

// Class Definition
class MassAndDistance
{
    private:
        double m1;
        double m2;
        double r;
    public:
        MassAndDistance(double _m1, double _m2, double _r)
        {
            if (_m1 <= 0.0 || _m2 <= 0.0 || _r <= 0.0)
                throw std::domain_error("Bad Values For Mass And/Or Distance !!!\n");
            
            this->m1 = _m1;
            this->m2 = _m2;
            this->r = _r;
        }

        double computeGravitational() const
        {
            // Variable Declarations
            double G_AN = 6.67 * (10e-11);
            double F_AN;

            // Code
            F_AN = (G_AN * this->m1 * this->m2) / (this->r * this->r);
            
            return F_AN;
        }
};

int main(void)
{
    // Variable Declarations
    MassAndDistance earthSun_AN(1.9891* (10e30), 5.9722 * (10e24), 149597871000.0);
    MassAndDistance jupiterSun_AN(1.9891 * (10e30), 1.89813 * (10e27), 760070000000.0);
    double forceBetweenEarthAndSun_AN;
    double forceBetweenJupiterAndSun_AN;

    // Code
    forceBetweenEarthAndSun_AN = earthSun_AN.computeGravitational();
    forceBetweenJupiterAndSun_AN = jupiterSun_AN.computeGravitational();

    std::cout << "Force Between The Sun and The Earth Is " << forceBetweenEarthAndSun_AN << " Newton" << std::endl;
    std::cout << "Force Between The Sun and The Jupiter Is " << forceBetweenJupiterAndSun_AN << " Newton" << std::endl;

    return 0;
}

