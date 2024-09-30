#include<stdio.h>
#include<conio.h>
#include<string.h>

struct country {
    char name[40];
    int population;
};

void print(struct country c)
{
    printf("Country name: %s\n",c.name);
    printf("Population: %i\n\n",c.population);
}

int main()
{
    struct country cou1={"Argentina",46000000};
    struct country cou2={"España",48000000};
    struct country cou3={"Italia",58000000};
    print(cou1);
    print(cou2);
    print(cou3);
    getch();
    return 0;
}
