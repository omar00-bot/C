#include<stdio.h>
// int main()
// {
//     char C[5];
//     C[0]='J';
//     C[1]='O';
//     C[2]='H';
//     C[3]='N';
//     C[4]='\0';
//     printf("%s\n",C);
// }




// #include<stdio.h>
// int main()
// {
//     char C[4];
//     C[0]='J';
//     C[1]='O';
//     C[2]='H';
//     C[3]='N';
//     printf("%s\n",C);
// }
//if no null end on sring array then
// output is JOHNÇig¼ê☺

void print(char* C)
{
    while(*C != '\0')
    {
        printf("%c",*C);
        C++;
    }
    printf("\n");
}

int main()
{
        char C[20]="Hello";
        print(C);
}
// try