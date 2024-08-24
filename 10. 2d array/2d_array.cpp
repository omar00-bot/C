#include<stdio.h>

int main()
{
    int B[2][3]={{2,3,6},{4,5,8}};
    int (*P)[3]=B;
    printf("B = %d\n",B);
    printf("*B = %d\n",*B);
    printf("B+1 = %d\n",B+1);    
    printf("*(B+1) = %d\n",*(B+1));  
    printf("*(B+1)+2 = %d\n",*(B+1)+2);  
    printf("*(*B+1) = %d\n",*(*B+1));  
}