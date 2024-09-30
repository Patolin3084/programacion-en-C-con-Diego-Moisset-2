#include<stdio.h>
#include<conio.h>

void load(int matrix[2][5])
{
    for(int c=0;c<5;c++)
    {
        for(int r=0;r<2;r++)
        {
            printf("Enter a element of row %i and column %i: ",r,c);
            scanf("%i",&matrix[r][c]);
        }
    }
}

void print(int matrix[2][5])
{
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<5;c++)
        {
            printf("%i-",matrix[r][c]);
        }
        printf("\n");
    }
}

void main()
{
    int matrix[2][5];
    load(matrix);
    print(matrix);
    getch();
    return 0;
}
