#include<stdio.h>
#include<conio.h>
#include<time.h>

#define AMOUNT 10

enum tExiste {NO, SI};

void load(int vec[AMOUNT])
{
    int r;
    srand(time(NULL));
    for(r=0;r<AMOUNT;r++)
        vec[r]=rand()%100 + 1;
}

void print(int vec[AMOUNT])
{
    int r;
    for(r=0;r<AMOUNT;r++)
        printf("%i ",vec[r]);
    printf("\n\n");
}

void consultation(int vec[AMOUNT])
{
    int r;
    int value;
    printf("Enter the value to search within the vector: ");
    scanf("%i",&value);
    enum tExiste existe=NO;
    for(r=0;r<AMOUNT;r++)
        if(value==vec[r])
        existe=SI;
    if(existe==SI)
        printf("The value entered is within the vector");
    else
        printf("The value entered is not within the vector");
}

int main()
{
    int vec[AMOUNT];
    load(vec);
    print(vec);
    consultation(vec);
    getch();
    return 0;
}
