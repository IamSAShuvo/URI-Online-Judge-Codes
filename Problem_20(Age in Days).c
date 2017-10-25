#include <stdio.h>

int main()
{
    int total_days, years, months, days;
    scanf("%d", &total_days);
    years = total_days / 365;
    int r_year = total_days % 365;
    months = r_year / 30;
    days = r_year % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);

    return 0;

}
