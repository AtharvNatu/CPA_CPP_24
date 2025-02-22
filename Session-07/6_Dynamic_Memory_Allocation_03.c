// Header Files
#include <stdio.h>
#include <stdlib.h>

// Structure Definition
struct Date
{
    int day;
    int month;
    int year;
};

// Function Declarations
struct Date* createDateInstance(int _day, int _month, int _year);
int getDay(struct Date *pDate_AN);
int getMonth(struct Date *pDate_AN);
int getYear(struct Date *pDate_AN);
void setDay(struct Date *pDate_AN, int newDay_AN);
void setMonth(struct Date *pDate_AN, int newMonth_AN_AN);
void setYear(struct Date *pDate_AN, int newYear_AN);
void showDate(struct Date *pDate_AN);
void releaseDateInstance(struct Date *pDate_AN);

// Main Function
int main(void)
{
    // Client Side
    struct Date *pNewDate_AN = createDateInstance(22, 2, 2025);
    
    showDate(pNewDate_AN);
    
    setDay(pNewDate_AN, 30);
    setMonth(pNewDate_AN, 4);
    setYear(pNewDate_AN, 2026);
    
    showDate(pNewDate_AN);
    
    printf("\n%d/%d/%d\n", getDay(pNewDate_AN), getMonth(pNewDate_AN), getYear(pNewDate_AN));

    releaseDateInstance(pNewDate_AN);
    pNewDate_AN = NULL;

    return 0;
}

// Server Side
struct Date *createDateInstance(int _day, int _month, int _year)
{
    // Code
    struct Date *pDate_AN = NULL;

    pDate_AN = (struct Date*)malloc(sizeof(struct Date));
    if (NULL == pDate_AN)
    {
        fprintf(stderr, "\nmalloc() : Fatal : Out Of Memory\n");
        exit(-1);
    }

    pDate_AN->day = _day;
    pDate_AN->month = _month;
    pDate_AN->year = _year;

    return pDate_AN;
}

int getDay(struct Date *pDate_AN)
{
    return pDate_AN->day;
}

int getMonth(struct Date *pDate_AN)
{
    return pDate_AN->month;
}

int getYear(struct Date *pDate_AN)
{
    return pDate_AN->year;
}

void setDay(struct Date *pDate_AN, int newDay_AN)
{
    pDate_AN->day = newDay_AN;
}

void setMonth(struct Date *pDate_AN, int newMonth_AN)
{
    pDate_AN->month = newMonth_AN;
}

void setYear(struct Date *pDate_AN, int newYear_AN)
{
    pDate_AN->year = newYear_AN;
}

void showDate(struct Date *pDate_AN)
{
    printf("%d/%d/%d\n", pDate_AN->day, pDate_AN->month, pDate_AN->year);
}

void releaseDateInstance(struct Date *pDate_AN)
{
    free(pDate_AN);
    pDate_AN = NULL;
}


