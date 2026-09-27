#include<stdio.h>

int main()
{
    float a,b,result;
    char op;

    printf("Enter the first number : ");
    scanf("%f",&a);

    printf("Enter the Operation (+,-,*,/) : ");
    scanf(" %c",&op);

    printf("Enter the second number : ");
    scanf("%f",&b);

    switch(op)
    {
        case '+':
            result = a+b;
            printf("The Result is : %.2f",result);
            break;

        case '-':
            result = a-b;
            printf("The Result is : %.2f",result);
            break;

        case '*':
            result = a*b;
            printf("The Result is : %.2f",result);
            break;

        case '/':
            if(b != 0)
                printf("Result = %.2f",a/b);
            else
                printf("Division by zero is not possible");
            break;

        default:
            printf("Invalid operator ...");
    }

    return 0;
}
