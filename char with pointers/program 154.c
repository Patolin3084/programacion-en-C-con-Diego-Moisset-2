#include<stdio.h>
#include<conio.h>
#define LARGE 40

void load(char *pe)
{
    printf("Enter the word: ");
    gets(pe);
}

void print(char *pe)
{
    printf("The word is: %s",pe);
}

int main()
{
    char w[LARGE];
    load(w);
    print(w);
    getch();
    return 0;
}
