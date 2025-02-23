#include <stdio.h>

struct Test
{
    int a;
    char b;
    float c;
};

void test_1(void);
struct Test g_test_1_AN;

int main(void)
{
    test_1();
    printf("g_test_1_AN.a = %d, g_test_1_AN.b = %d, g_test_1_AN.c = %f\n", g_test_1_AN.a, g_test_1_AN.b, g_test_1_AN.c);
    return 0;
}

void test_1(void)
{
    struct Test t1_AN;
    g_test_1_AN.a = 100;
    g_test_1_AN.b = 'A';
    g_test_1_AN.c = 3.14f;

    t1_AN.a = 200;
    t1_AN.b = 'B';
    t1_AN.c = 3.14f;

    printf("t1_AN.a = %d, t1_AN.b = %d, t1_AN.c = %f\n", t1_AN.a, t1_AN.b, t1_AN.c);
}
