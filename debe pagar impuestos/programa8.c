#include<stdio.h>

int main()
{
    float sueldo;
    printf("Ingrese el monto del sueldo:");
    scanf("%f",&sueldo);
    if(sueldo>3000)
    {
        printf("Este trabajador debe pagar impuestos");
    }
    getch();
    return 0;
}
