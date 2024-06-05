#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int wiek, rok_ur, rok_ter;
    rok_ter = 2023;

    printf("Podaj rok urodzenia: \n");
    scanf("%d", &rok_ur);



    wiek = rok_ter - rok_ur;

    if(wiek>=18)
    {
      printf("Jestes pelnoletni!");
    }
    else {
      printf("Jestes niepelnoletni!");
    }
    return(0);
}
