#include<stdio.h>
#include<conio.h>

int main()
{
    char word[30];
    int x=0;
    printf("Enter a lowercase word to change its vowels: ");
    gets(word);
    while(word[x]!='\0')
    {
         if(word[x]=='a' || word[x]=='e' || word[x]=='i' || word[x]=='o' || word[x]=='u')
        {
            word[x]='-';
        }
        x++;
    }
    printf("%s",word);
    getch();
    return 0;
}
