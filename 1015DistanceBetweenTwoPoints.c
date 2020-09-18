#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (void) 
{
    float x1, y1, x2, y2, distancia;

    scanf ("%f %f %f %f", &x1, &y1, &x2, &y2);
 
    pow (( x2 - x1), 2.0);
    pow (( y2 - y1), 2.0);

    distancia = sqrt (pow ((x2 - x1), 2.0) + pow (( y2 - y1), 2.0));

    printf ("%.4f\n", distancia);

    return 0;
}
