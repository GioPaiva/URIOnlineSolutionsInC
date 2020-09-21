#include <stdio.h>

int main ()
{
    int N, minutos, segundos, horas;

    scanf ("%d", &N);

    horas = N / 3600;
    minutos = N % 3600 / 60;
    segundos = N % 60;

    printf ("%d:%d:%d\n", horas, minutos, segundos);

    return 0;

}
