#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sign;
    double a,b,ans;
    printf("Welcome user.\n");
    printf("Enter operation sign that you want to do(+,-,*,/).\n");
    scanf("%c", &sign);
    switch(sign){

case '+':
    printf("Enter first number: \n");
    scanf("%lf", &a);
    printf("Enter second number: \n");
    scanf("%lf", &b);
    printf("Your operation as well as the result is: \n");
    printf("%lf + %lf = %lf", a, b, a+b);
    break;

case '-':
    printf("Enter first number: \n");
    scanf("%lf", &a);
    printf("Enter second number: \n");
    scanf("%lf", &b);
    printf("Your operation as well as the result is: \n");
    printf("%lf - %lf = %lf", a, b, a-b);
    break;

case '*':
    printf("Enter first number: \n");
    scanf("%lf", &a);
    printf("Enter second number: \n");
    scanf("%lf", &b);
    printf("Your operation as well as the result is: \n");
    printf("%lf * %lf = %lf", a, b, a*b);
    break;

case '/':
    printf("Enter first number: \n");
    scanf("%lf", &a);
    printf("Enter second number: \n");
    scanf("%lf", &b);
    printf("Your operation as well as the result is: \n");
    printf("%lf / %lf = %lf", a, b, a/b);
    break;

    }


    return 0;
}
