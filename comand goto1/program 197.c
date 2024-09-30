#include<stdio.h>
#include<conio.h>

#define ROW 3
#define COLUMN 3

void load(int mat[ROW][COLUMN])
{
    for(int r=0;r<ROW;r++)
    {
        for(int c=0;c<COLUMN;c++)
        {
            printf("Enter element [%i,%i]:",r,c);
            scanf("%i",&mat[r][c]);
            if(mat[r][c]==0)
            {
                goto goOut;
            }
        }
    }
    return;
    goOut:printf("Whit 0(zero) the loading of elements ends.\n");
}

void print(int mat[ROW][COLUMN])
{
    for(int r=0;r<ROW;r++)
    {
        for (int c=0;c<COLUMN;c++)
        {
            printf("%i ",mat[r][c]);
        }
        printf("\n");
    }
}

int main()
{
    int mat[3][3]={{0,0,0},
                   {0,0,0},
                   {0,0,0}};
    load(mat);
    print(mat);
    getch();
    return 0;
}
