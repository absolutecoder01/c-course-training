#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int mies;
    printf("Podaj nr miesiaca: ");
    scanf("%d", &mies);
    switch(mies)
    {
      case 1: printf("Styczen 31\n"); break;
      case 2: printf("Luty 28\n"); break;
      case 3: printf("Marzec 31\n"); break;
      case 4: printf("Kwiecien 30\n"); break;
      case 5: printf("Maj 31\n"); break;
      case 6: printf("Czerwiec 30\n"); break;
      case 7: printf("Lipiec 31\n"); break;
      case 8: printf("Sierpien 31\n"); break;
      case 9: printf("Wrzesien 30\n"); break;
      case 10: printf("Pazdziernik 31\n"); break;
      case 11: printf("Listopad 30\n"); break;
      case 12: printf("Grudzien 31\n"); break;
      default: printf("Niema takiego miesiaca "); break;
    }
    return(0);
}
