#include<stdio.h>
#include<conio.h>

int main()
{
    char word[50];
    int vocales=0;
    int consonantes=0;
    printf("Enter a word in lowercase: ");
    gets(word);
    for(int r=0;r<strlen(word);r++)
    {
        switch(word[r]){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':vocales++;
                break;
        default: consonantes++;
                break;
        }
    }
    printf("Number of vowels the word has: %i\n",vocales);
    printf("Number of consonants the word has: %i\n",consonantes);
    getch();
    return 0;
}
