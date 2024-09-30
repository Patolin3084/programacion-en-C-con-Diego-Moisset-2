#include<stdio.h>
#include<conio.h>

#define TAMANO 3
#define FINPROGRAMA "thank you for using our program"


void load(int salary[TAMANO])
{
    for(int x=0;x<TAMANO;x++)
    {
        printf("Enter a salary: ");
        scanf("%i",&salary[x]);
    }
}

void print(int salary[TAMANO])
{
    printf("list of salaries\n");
    for(int x=0;x<TAMANO;x++)
    {
        printf("%i\n",salary[x]);
    }
}

void main()
{
    int salary[TAMANO];
    load(salary);
    print(salary);
    printf(FINPROGRAMA);
    getch();
    return 0;
}
