#include <stdio.h>

int main()
{
    int n, remainder, quotient;
    scanf("%d", &n);
    printf("%d\n", n);
    if(n >= 100)
    {
        quotient = n / 100;
        remainder = n % 100;
        printf("%d nota(s) de R$ 100,00\n", quotient);
    }
    else
    {
        quotient = n / 100;
        printf("%d nota(s) de R$ 100,00\n", quotient);
    }
    if(remainder >= 50)
    {
        quotient = remainder / 50;
        remainder = remainder % 50;
        printf("%d nota(s) de R$ 50,00\n", quotient);
    }
    else
    {
        quotient = remainder / 50;
        printf("%d nota(s) de R$ 50,00\n", quotient);
    }
    if(remainder >= 20)
    {
        quotient = remainder / 20;
        remainder = remainder % 20;
        printf("%d nota(s) de R$ 20,00\n", quotient);
    }
    else
    {
        quotient = remainder / 20;
        printf("%d nota(s) de R$ 20,00\n", quotient);
    }
    if(remainder >= 10)
    {
        quotient = remainder / 10;
        remainder = remainder % 10;
        printf("%d nota(s) de R$ 10,00\n", quotient);
    }
    else
    {
        quotient = remainder / 10;
        printf("%d nota(s) de R$ 10,00\n", quotient);
    }
    if(remainder >= 5)
    {
        quotient = remainder / 5;
        remainder = remainder % 5;
        printf("%d nota(s) de R$ 5,00\n", quotient);
    }
    else
    {
        quotient = remainder / 5;
        printf("%d nota(s) de R$ 5,00\n", quotient);
    }
    if(remainder >= 2)
    {
        quotient = remainder / 2;
        remainder = remainder % 2;
        printf("%d nota(s) de R$ 2,00\n", quotient);
    }
    else
    {
        quotient = remainder / 2;
        printf("%d nota(s) de R$ 2,00\n", quotient);
    }
    if(remainder >= 1)
    {
        quotient = remainder / 1;
        remainder = remainder % 1;
        printf("%d nota(s) de R$ 1,00\n", quotient);
    }
    else
    {
        quotient = remainder / 1;
        remainder = remainder % 1;
        printf("%d nota(s) de R$ 1,00\n", quotient);
    }


    return 0;
}
