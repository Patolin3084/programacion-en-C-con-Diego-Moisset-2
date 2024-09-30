#include<stdio.h>
#include<conio.h>

int main()
{
    int v1,v2,may;
    printf("Enter the first value:");
    scanf("%i",&v1);
    printf("Enter the second value:");
    scanf("%i",&v2);
    may=(v1>v2)?v1:v2;
    printf("The bigger value is: %i",may);
    getch();
    return 0;
}

