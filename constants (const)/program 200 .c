#include<stdio.h>
#include<conio.h>

struct person{
    char name[50];
    int age;
};

int main()
{
    const int value1=10;
    const short value2=1;
    const long value3=100000000001;
    const struct person per1={"juan",34};
    const char letter='A';
    const char tittle[7]="Inicio";
    printf("The constant int has the value: %i\n",value1);
    printf("The constant short has the value: %i\n",value2);
    printf("The constant long has the value: %li\n",value3);
    printf("The name is: %s\n",per1.name);
    getch();
    return 0;

}
