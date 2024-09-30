#include<stdio.h>
#include<conio.h>

void exchange(int *pe1,int *pe2)
{
    int aux=*pe1;
    *pe1=*pe2;
    *pe2=aux;
}

int main()
{
    int x1=10,x2=20;
    printf("%i   %i\n",x1,x2);
    exchange(&x1,&x2);
    printf("%i   %i",x1,x2);
    getch();
    return 0;
}
