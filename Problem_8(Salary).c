#include <stdio.h>

int main()
{
    int N, total_worked_hour;
    float per_hour_dolar, total_salary;
    scanf("%d %d %f", &N, &total_worked_hour, &per_hour_dolar);
    total_salary = total_worked_hour * per_hour_dolar;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", N, total_salary);

    return 0;
}
