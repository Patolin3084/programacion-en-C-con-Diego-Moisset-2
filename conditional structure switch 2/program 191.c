#include<stdio.h>
#include<conio.h>

int main()
{
    int value1,value2,result;
    char operation;
    printf("Enter the first value:");
    scanf("%i",&value1);
    printf("Enter the second value:");
    scanf("%i",&value2);
    printf("Enter a mathematical operator (+,-,*,/):");
    scanf(" %c",&operation);
    switch(operation){
        case '+':result=value1+value2;
                printf("The addition is: %i\n",result);
                break;
        case '-':result=value1-value2;
                printf("The subtraction is: %i\n",result);
                break;
        case '*':result=value1*value2;
                printf("The multiplication is: %i\n",result);
                break;
        case '/':result=value1/value2;
                printf("The  division is: %i\n",result);
                break;
    }
    getch();
    return 0;
}
