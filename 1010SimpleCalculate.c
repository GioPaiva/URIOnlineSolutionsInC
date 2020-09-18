#include <stdio.h> 

    int main ()
    {

    int code1, units1, code2, units2;
    float  priceunit1, priceunit2, amount;

    scanf ("%d %d %f", &code1, &units1, &priceunit1);
    scanf ("%d %d %f", &code2, &units2, &priceunit2);

    amount = (priceunit1 * units1) + (priceunit2 * units2);

    printf ("VALOR A PAGAR: R$ %.2f\n", amount);


    return 0;

    }
