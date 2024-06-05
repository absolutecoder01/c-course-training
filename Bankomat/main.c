#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int kwota, ile;
    printf("Podaj kwote do wyplaty: \n");
    scanf("%d", &kwota);

    ile = kwota / 500;
    kwota = kwota % 500;
    if (ile>0)
    {
      printf("500zl - %d sztuk\n", ile);
    }
    ile = kwota / 200;
    kwota = kwota % 200;
    if (ile>0)
    {
      printf("200zl - %d sztuk\n", ile);
    }
    ile = kwota / 100;
    kwota - kwota % 100;
    if (ile>0)
    {
      printf("100zl - %d sztuk\n", ile);
    }
    ile = kwota / 50;
    kwota - kwota % 50;
    if (ile>0)
    {
      printf("50zl - %d sztuk\n", ile);
    }
    ile = kwota / 20;
    kwota - kwota % 20;
    if (ile>0)
    {
      printf("20zl - %d sztuk\n", ile);
    }
    ile = kwota / 10;
    kwota - kwota % 10;
    if (kwota>0)
    {
      printf("10zl - %d sztuk\n", ile);
    }
    return(0);
}
