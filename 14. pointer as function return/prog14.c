#include<stdio.h>
#include<stdlib.h>
void printhelloworld()
{
    printf("Hello world\n");
}
int* add(int* d, int* e)
{
    int* f = malloc(sizeof(int));
    *f = (*d) + (*e);
    printf("(add) f = %d\n",*f);
    return f;
}

int main()
{
    int a = 2, b=3;
    int* ptr = add(&a,&b);
    printhelloworld();
    printf("main add = %d\n",(add(&a,&b)));
    printf("main f = %d\n",ptr);
    printf(" main sum = %d\n",*ptr);
    free(ptr);
}