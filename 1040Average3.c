#include <stdio.h>

int main (void)
{
    double N1, N2, N3, N4, NExame, MEDIA, MEDIAFINAL;

    scanf ("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    MEDIA = ((N1*2) + (N2*3) + (N3*4) + (N4*1)) / 10;

    printf ("Media: %.1lf\n", MEDIA);

    if (MEDIA >= 7.0)
    {

        printf ("Aluno aprovado.\n");
    }
    
    else if (MEDIA < 5.0)
    {
        printf ("Aluno reprovado.\n");
    }

    else 
    {   
        printf ("Aluno em exame.\n");
        scanf ("%lf", &NExame);
        printf ("Nota do exame: %.1lf\n", NExame);
        MEDIAFINAL = (MEDIA + NExame) / 2;
      

        if (MEDIAFINAL >= 5.0)
        {
          printf ("Aluno aprovado.\n");
        }
        
        else 
        {
            printf ("Aluno reprovado.\n");
        }

        printf ("Media final: %.1lf\n", MEDIAFINAL);

    }

    return 0;
}
