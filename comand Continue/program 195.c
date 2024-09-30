#include<stdio.h>
#include<conio.h>

int main()
{
    int value;
    for(int r=0;r<5;r++)
    {
        printf("Enter a value from 1 to 5: ");
        scanf("%i",&value);
        if(value>5 || value<1)
            continue;
        switch(value)
        {
            case 1:printf("Uno");
            break;
            case 2:printf("Dos");
            break;
            case 3:printf("Tres");
            break;
            case 4:printf("Cuatro");
            break;
            case 5:printf("Cinco");
            break;
        }
        printf("\n");
    }
    getch();
    return 0;
}
