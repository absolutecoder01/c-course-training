#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float r;
    float wynik;

    printf("Podaj promien: \n");
    scanf("%f", &r);
    wynik = 4.0/3 * 3.14 * r * r * r;
    printf("Objetosc kuli = %f", wynik);
    return(0);
}
