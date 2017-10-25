#include <stdio.h>

int main()
{
    int n, hour, minute, second;
    scanf("%d", &n);
    hour = n/3600;
    int r_hour = n % 3600;
    minute = r_hour / 60;
    int r_minute = r_hour % 60;
    second = r_minute / 60;
    int r_second = r_minute % 60;
    printf("%d:%d:%d\n", hour, minute, r_second);

    return 0;
}
