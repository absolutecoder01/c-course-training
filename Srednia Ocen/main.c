#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, ile_ocen;
    float srednia, ocena, suma;

    printf("Podaj liczbe ocen: ");

    scanf("%d", &ile_ocen);

    for(i=1; i<=ile_ocen; i++)
    {
      printf("Podaj ocene nr %d:", i);
      scanf("%f", &ocena);
      suma+=ocena;
    }

    srednia = suma / ile_ocen;
    printf("Srednia ocen = %f\n", srednia);

    return(0);
}
