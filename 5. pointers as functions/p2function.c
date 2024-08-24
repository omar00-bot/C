#include<stdio.h>
void increment(int* a);
int main()
{
    int a = 10;
    increment(&a);
    printf("a: %d",a);
}
void increment(int* a)
{
    *a = *a + 1;
}
