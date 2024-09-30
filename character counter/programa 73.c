#include<stdio.h>
#include<conio.h>

int main()
{
    char word[40];
    int x=0;
    printf("Enter a word: ");
    gets(word);
    while (word[x]!='\0')
        x++;
    printf("The number of caracters in the word %s has is %i",word,x);
    getch();
    return 0;
}
