#include <stdio.h>

// As per C-standard, functions cannot be defined inside a structure

struct Date
{
    // Data Definition Statements
    int day_AN;
    int month_AN;
    int year_AN;

    // Function Definition -> Not Allowed inside
    // Error description : error C2032: 'get_day': function cannot be member of struct 'Date'
    // int get_day()
    // {
    //     return day;
    // }
};

