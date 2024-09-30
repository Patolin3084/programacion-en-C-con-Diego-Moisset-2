#include<stdio.h>
#include<conio.h>

int main()
{
    int v1,v2,result;
    printf("Enter the first value:");
    scanf("%i",&v1);
    printf("Enter the second value:");
    scanf("%i",&v2);
    result=(v1==v2)?(v1+v2):(v1*v2);
    printf("The result is: %i",result);
    getch();
    return 0;
}
