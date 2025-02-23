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
    // Define 3 local objects of class Date
    Date d1_AN;
    Date d2_AN;
    Date d3_AN;

    // Define 3 pointers to class Date
    Date *pDate1_AN = 0; // pDate1_AN is a pointer to class Date
    Date *pDate2_AN = 0;
    Date *pDate3_AN = 0;

    // Set Pointers to Addresses
    pDate1_AN = &d1_AN;
    pDate2_AN = &d2_AN;
    pDate3_AN = &d3_AN;

    // Setting day, month, year of d1_AN
    pDate1_AN->day = 23;
    pDate1_AN->month = 2;
    pDate1_AN->year = 2025;

    // Setting day, month, year of d2_AN
    pDate2_AN->day = 15;
    pDate2_AN->month = 7;
    pDate2_AN->year = 2004;

    // Setting day, month, year of d3_AN
    pDate3_AN->day = 19;
    pDate3_AN->month = 4;
    pDate3_AN->year = 2029;
    
    cout << endl << "main() : Making use of pointer 'pDate1_AN' to make a call to Date::show()" << endl;
    cout << "main() : Address of object 'd1_AN' is : " << pDate1_AN << endl;
    pDate1_AN->show();   // == Date::show(&d1_AN); // Formal Parameter will be 'this' pointer

    cout << endl << "main() : Making use of pointer 'pDate2_AN' to make a call to Date::show()" << endl;
    cout << "main() : Address of object 'd2_AN' is : " << pDate2_AN << endl;
    pDate2_AN->show();   // == Date::show(&d2_AN); // Formal Parameter will be 'this' pointer

    cout << endl << "main() : Making use of pointer 'pDate3_AN' to make a call to Date::show()" << endl;
    cout << "main() : Address of object 'd3_AN' is : " << pDate3_AN << endl;
    pDate3_AN->show();   // == Date::show(&d3_AN); // Formal Parameter will be 'this' pointer


    return 0;
}

