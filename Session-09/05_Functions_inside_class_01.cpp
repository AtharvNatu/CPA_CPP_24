//! This Code will not compile

#include <iostream>

using std::cout;

int compute(int x, int y);

class Date
{
    public:
        int day;
        int month;
        int year;

        void show(void)
        {
            cout << day << "/" << month << "/" << year << "\n";
        }

        void show(Date *pDate)
        {
            cout << pDate->day << "/" << pDate->month << "/" pDate->year << "\n";
        }
};

class c
{
    public:
        void f(C* pC, /* Optional Other Parameters */)
        {

        }

        void g()
        {

        }
};

int main(void)
{
    int result_AN;

    result_AN = compute(10, 5);

    Date myBirthDate_AN;
    myBirthDate_AN.day = 15;
    myBirthDate_AN.month = 10;
    myBirthDate_AN.year = 2002;
    Date::show(&myBirthDate_AN);

    Date d1_AN;
    d1_AN.day = 1;
    d1_AN.month = 2;
    d1_AN.year = 1986;
    Date::show(&d1_AN);


    Date d2_AN;
    d2_AN.day = 1;
    d2_AN.month = 2;
    d2_AN.year = 1986;
    Date::show(&d2_AN);

    return 0;
}

int compute(int x, int y)
{
    return (x + y) * (x - y);
}

//------------------------------------------------------

class Date
{
    public:
        int day;
        int month;
        int year;

        void show(void)
        {
            cout << day << "/" << month << "/" << year << "\n";
        }
};

int main(void)
{
    Date myBirthDate_AN;

    myBirthDate_AN.day = 15;
    myBirthDate_AN.month = 10;
    myBirthDate_AN.year = 2002;

    // Date::show(&myBirthDate_AN);

    myBirthDate_AN.show(); // Date::show(&myBirthDate_AN);

    return 0;
}
