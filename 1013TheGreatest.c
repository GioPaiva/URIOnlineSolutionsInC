#include <stdio.h>
#include <stdlib.h>

int main (void) 

{

int a, b, c, M_ab, M_abc;

scanf ("%d %d %d", &a, &b, &c);

M_ab = (a + b + abs (a - b )) / 2;
M_abc = (M_ab + c + abs (M_ab - c)) /2;

printf ("%d eh o maior\n", M_abc);

return 0;


}
