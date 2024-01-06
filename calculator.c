#include <stdio.h>
#include <stdlib.h>

int valCheck(int a)
{
    int temp;
    temp = scanf(" %d", &a);
    if (temp != 1)
    {
        printf("invalid input \nquiting program...\n");
        exit(1);
    }
    else
    {
        return a;
    }
}

char function()
{
    char operator;
    printf("Enter the operator (+,-,*,/,%%):\t ");
    scanf(" %c", &operator);
    return operator;
}

int main()
{
    int temp;
    char operator;
    int a;
    int b;

    printf("Enter 1st no.\n");
    a = valCheck(a);

    operator= function();

    printf("Enter 2nd no.\n");
    b = valCheck(b);

    switch (operator)
    {
    case '+':
        printf("Your final answer is : %d\n", a + b);
        break;
    case '-':
        printf("Your final answer is : %d \n", a - b);
        break;
    case '*':
        printf("Your final answer is : %d \n", a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("Divide by 'zero' is undifined.\nquiting program...\n");
            exit(1);
        }
        else
        {

            printf("Your final answer is : %d \n", a / b);
            break;
        }
    case '%':
        if (b == 0)
        {
            printf("Module by 'zero' is undifined.\nquiting program...\n");
            exit(1);
        }
        else
        {

            printf("Your final answer is : %d \n", a % b);
            break;
        }
    default:
        printf("invalid operator...\nquiting program...\n");
        exit(1);
    }
    return 0;
}
