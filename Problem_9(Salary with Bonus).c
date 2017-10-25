#include <stdio.h>
#include <string.h>

int main()
{
    char name[10];
    gets(name);
    double fixed_salary, value_of_sold, final_salary;
    scanf("%lf %lf", &fixed_salary, &value_of_sold);
    final_salary = fixed_salary + (value_of_sold * 15) / 100;
    printf("TOTAL = R$ %.2lf\n", final_salary);

    return 0;
}
