//https://www.youtube.com/watch?v=CpjVucvAc3g&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&index=7
#include<stdio.h>
int increment(int A[],int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        A[i]=A[i]+1;
    }
}
int main()
{
    int A[]={1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    int i;
    for(i=0;i<5;i++);
    {
        increment(&A[i],size);
        printf("%d, \n",A[i]);
    }
    return 0;
}
