#include<stdio.h>
#include<conio.h>

#define AMOUNT 5

void load(int vec[AMOUNT])
{
    for(int r=0;r<AMOUNT;r++)
    {
        printf("Enter a component:");
        scanf("%i",&vec[r]);
    }
}

void print(const int vec[AMOUNT])
{
    for(int r=0;r<AMOUNT;r++)
    {
        printf("%i ",vec[r]);
    }
}

int main()
{
    int vec[AMOUNT];
    load(vec);
    print(vec);
    getch();
    return 0;
}
