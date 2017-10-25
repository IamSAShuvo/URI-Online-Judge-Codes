#include <stdio.h>

int main()
{
    int hours, avg_speed;
    double fuel_needed;
    scanf("%d %d", &hours, &avg_speed);
    fuel_needed = (avg_speed * hours) / 12.00;
    printf("%.3lf\n", fuel_needed);

    return 0;
}
