#include<stdio.h>
#include<conio.h>

struct coordenate{
    int x;
    int y;
};

union point{
    int v[2];
    struct coordenate co;
};

int main()
{
    union point p;
    p.co.x=10;
    p.co.y=20;
    printf("%i %i\n",p.co.x,p.co.y); //10 20
    printf("%i %i\n",p.v[0],p.v[1]); //10 20
    getch();
    return 0;
}
