#include<stdio.h>
#include<conio.h>

struct country {
    char name[40];
    int population;
};

void load(struct country *pcou)
{
    printf("Enter the country name: ");
    gets(pcou->name);
    printf("Enter the population of this country: ");
    scanf("%i",&pcou->population);
    fflush(stdin);
}

void print(struct country cou)
{
    printf("%s has %i people\n",cou.name,cou.population);
}

int main()
{
    struct country cou1,cou2,cou3;
    load(&cou1);
    load(&cou2);
    load(&cou3);
    print(cou1);
    print(cou2);
    print(cou3);
    getch();
    return 0;
}
