#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int l_uczniow, wynik;
    printf("Podaj liczbe uczniow w klasie: \n");
    scanf("%d", &l_uczniow);
    if(l_uczniow % 2 == 0)
    {
      printf("Liczba jest parzysta");
    }
    else {
      printf("Liczba jest nieparzysta");
    }
    return(0);
}
