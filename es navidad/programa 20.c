#include<stdio.h>
#include<conio.h>

int main()
{
    int dd, mm, aa;
    printf("Dia:");
    scanf("%i", &dd);
    printf("Mes:");
    scanf("%i", &mm);
    printf("Año:");
    scanf("%i", &aa);
    if (dd==25 && mm==12)
    {
        printf("Es Navidad!!!");
    }
    getch();
    return 0;
}
