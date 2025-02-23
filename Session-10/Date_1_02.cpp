#include <iostream>

using std::cout;
using std::endl;

class Date
{
    public:
        int day;
        int month;
        int year;

        void show()
        {
            cout << "--------------------------------------" << endl;
            cout << "ENTER : Date::show()" << endl;
            cout << "Address of Object used for making the current call : " << this << endl;

            cout << this->day << "/" << this->month << "/" << this->year << endl;
            cout << "LEAVE : Date::show()" << endl;
            cout << "--------------------------------------" << endl;
        }
};

int main(void)
{
    Date d1_AN;
    Date d2_AN;
    Date d3_AN;

    // Setting day, month, year of d1_AN
    d1_AN.day = 2;
    d1_AN.month = 2;
    d1_AN.year = 2025;

    // Setting day, month, year of d2_AN
    d2_AN.day = 5;
    d2_AN.month = 8;
    d2_AN.year = 2011;

    // Setting day, month, year of d3_AN
    d3_AN.day = 7;
    d3_AN.month = 12;
    d3_AN.year = 2034;

    cout << endl << "main() : Making use of object 'd1_AN' to make a call to Date::show()" << endl;
    cout << "main() : Address of object 'd1_AN' is : " << &d1_AN << endl;
    d1_AN.show();   // == Date::show(&d1_AN); // Formal Parameter will be 'this' pointer

    cout << endl << "main() : Making use of object 'd2_AN' to make a call to Date::show()" << endl;
    cout << "main() : Address of object 'd2_AN' is : " << &d2_AN << endl;
    d2_AN.show();   // == Date::show(&d2_AN); // Formal Parameter will be 'this' pointer

    cout << endl << "main() : Making use of object 'd3_AN' to make a call to Date::show()" << endl;
    cout << "main() : Address of object 'd3_AN' is : " << &d3_AN << endl;
    d3_AN.show();   // == Date::show(&d3_AN); // Formal Parameter will be 'this' pointer

    return 0;
}
