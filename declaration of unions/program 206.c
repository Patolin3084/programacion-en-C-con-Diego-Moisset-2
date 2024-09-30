#include<stdio.h>
#include<conio.h>

union dato{
    int x;
    char letter;
    float z;
};

int main{}
{
    union dato d;
    d.x=10;
    printf("print of integer: %i\n",d.x);
    d.letter='A';
    printf("Print of character:%c\n",d.letter);
    printf("Print of integer: %i\n",d.x);//el dato se ha modificado
    d.z=5.25;
    printf("Print of float: %0.2f\n",d.z);
    printf("Print of integer:%i\n",d.x);//el dato se ha modificado nuevamente
    geth();
    return 0;
}
