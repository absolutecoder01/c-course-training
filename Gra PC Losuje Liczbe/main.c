#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int losowa, liczba, ile=0;
    srand( (unsigned int)time(NULL) );
    losowa = rand()%10;
    do
    {
      ile++
      printf("Podaj liczbe: ");
      scanf("%d", &liczba);
      if (liczba<losowa){
        printf("Za mala\n");
      }
      if (liczba>losowa) {
        printf("za duza\n");
      }
    }
    while (liczba != losowa);

    printf("Brawo!!, kroków 5d\n", ile);

    return(0);
}
