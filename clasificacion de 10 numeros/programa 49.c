#include<stdio.h>
#include<conio.h>

int main()
{
    int f,valor,neg,pos,mult15,par;
    neg=0;
    pos=0;
    mult15=0;
    par=0;
    for(f=1;f<=10;f++)
    {
        printf("Ingrese un valor: ");
        scanf("%i",&valor);
        if(valor>0)
        {
            pos++;
        }
        else
        {
            if(valor<0)
            {
                neg++;
            }
        }
        if(valor%15==0)
        {
            mult15++;
        }
        if(valor%2==0)
        {
            par++;
        }
    }
    printf("\n");
    printf("Cantidad de numeros positivos: ");
    printf("%i",pos);
    printf("\n");
    printf("Cantidad de numeros negativos: ");
    printf("%i",neg);
    printf("\n");
    printf("Cantidad de numeros multiplo de 15: ");
    printf("%i",mult15);
    printf("\n");
    printf("Cantidad de numeros pares: ");
    printf("%i",par);
    getch();
    return 0;
}
