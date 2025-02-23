#include <iostream>

using std::cout;

class Test
{
    int a;
    char b;
    float c;
};

Test g_test_1_AN;

void test_1(void);

int main(void)
{
    test_1();
    return 0;
}

void test_1(void)
{
    Test t1_AN;

    /* Compile Time Error
    g_test_1_AN.a = 100;
    g_test_1_AN.b = 'A';
    g_test_1_AN.c = 3.14f;

    t1_AN.a = 200;
    t1_AN.b = 'B';
    t1_AN.c = 6.28f; */
}



