#include<stdio.h>
#include<conio.h>

int main()
{
    int value;
    int suma=0;
    for(int r=0;r<10;r++)
    {
        printf("Enter a value: ");
        scanf("%i",&value);
        if(value==0)
           break;
           suma+=value;
    }
    printf("The addition of the entered values is: %i",suma);
    getch();
    return 0;
}

