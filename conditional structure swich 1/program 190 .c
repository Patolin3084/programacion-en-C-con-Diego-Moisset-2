#include<stdio.h>
#include<conio.h>

int main()
{
    int value;
    printf("Enter a value between 1 and 5:");
    scanf("%i",&value);
    switch(value){
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
        default:
            printf("El valor esta fuera de rango");
            break;
    }
    getch();
    return 0;
}
