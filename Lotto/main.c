#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Rosnacej wyswietla tylko liczby parzyste
    int i;
    for(i=0; i<50; i+=2)
      printf("%d\n", i);
    return(0);

    // Rosn¹cej
    int i;
    for(i=0; i<50; i++)
      printf("%d\n", i);
    return(0);


  //Malej¹cej
    int i;
    for(i=50; i>0; i--)
      printf("%d\n", i);
    return(0);
}

