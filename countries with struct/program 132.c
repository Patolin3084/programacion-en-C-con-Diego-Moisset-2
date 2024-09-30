#include<stdio.h>
#include<conio.h>

struct country {
    char name[40];
    int population;
};

int main()
{
    struct country cou1,cou2,cou3;

    printf("Enter the country name: ");
    gets(cou1.name);
    printf("Enter the population of this country: ");
    scanf("%i",&cou1.population);
    fflush(stdin);

    printf("Enter the country name: ");
    gets(cou2.name);
    printf("Enter the population of this country: ");
    scanf("%i",&cou2.population);
    fflush(stdin);

    printf("Enter the country name: ");
    gets(cou3.name);
    printf("Enter the population of this country: ");
    scanf("%i",&cou3.population);

    if(cou1.population>cou2.population && cou1.population>cou3.population)
    {
        printf("\nThe country with most population is %s.",cou1.name);
    }
    else
    {
        if(cou2.population>cou3.population)
        {
            printf("\nThe country with most population is %s.",cou2.name);
        }
        else
        {
            printf("\nThe country with most population is %s.",cou3.name);
        }
    }
    getch();
    return 0;
}
