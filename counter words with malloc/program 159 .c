#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char *pword;
    int size;
    printf("How many letters will the word have? :");
    scanf("%i",&size);
    fflush(stdin);
    pword=malloc((size+1)*sizeof(char));
    printf("Enter the word:");
    gets(pword);
    printf("The word entered is: %s",pword);
    free(pword);
    getch();
    return 0;
}
