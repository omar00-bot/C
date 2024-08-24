//pointer to pointer
#include<stdio.h>
int main()
{
    int x = 5;
    int* p = &x;
    printf("%d\n",x);
    *p = 6;
    int** q = &p;
    int*** r = &q;
    printf("size of int is: %d\n",sizeof(int));
    printf("%d\n",p);
    printf("%d\n",p+1);
    printf("%d\n",*p);
    printf("%d\n",q);
    printf("%d\n",**q);
    printf("%d\n",r);
    printf("%d\n",***r);
    ***r=10;
    printf("x = %d\n",x); 
    **q = *p+2;
    printf("x = %d\n",x); 
}