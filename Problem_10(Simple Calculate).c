#include <stdio.h>

int main()
{
    int product1_code, product1_unit, product2_code, product2_unit;
    double product1_price, product2_price, value_to_pay;
    scanf("%d %d %lf", &product1_code, &product1_unit, &product1_price);
    scanf("%d %d %lf", &product2_code, &product2_unit, &product2_price);
    value_to_pay = (product1_unit * product1_price) + (product2_unit * product2_price);
    printf("VALOR A PAGAR: R$ %.2lf\n", value_to_pay);

    return 0;

}
