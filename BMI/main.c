#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float m_ciala, wzrost, wynik;
    printf("Podaj mase ciala: \n");
    scanf("%f", &m_ciala);
    printf("Podaj wzrost(W metrach): \n");
    scanf("%f", &wzrost);

    wynik = m_ciala / (wzrost * wzrost);

    printf("BMI: %f \n",wynik);


    if (wynik>= 40.0)
    {
      printf("III Stopien otylosci");
    }
    else if (wynik >= 35.0 && wynik <= 39.9)
    {
      printf("II Stopien otylosci");
    }
    else if (wynik >= 30.0 && wynik <= 34.9)
    {
      printf("I Stopien otylosci");
    }
    else if (wynik >= 25.0 && wynik <= 29.9)
    {
      printf("Nadwaga");
    }
    else if (wynik >= 18.5 && wynik <= 24.9)
    {
      printf("Wartosc prawidlowa");
    }
    else if (wynik >= 17.0 && wynik <= 18.4)
    {
      printf("Niedowaga");
    }
    else if (wynik >= 16.0 && wynik <= 16.9)
    {
      printf("Wychudzenie");
    }
    else
    {
      printf("Wyglodzenie");
    }

    return(0);
}
