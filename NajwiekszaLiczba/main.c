#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int minimum, maximum, l1,l2,l3,l4,l5;

    printf("Podaj 5 liczb: \n");
    printf("Podaj liczb� 1:");
    scanf("%d", &l1);
    printf("Podaj liczb� 2:");
    scanf("%d", &l2);
    printf("Podaj liczb� 3:");
    scanf("%d", &l3);
    printf("Podaj liczb� 4:");
    scanf("%d", &l4);
    printf("Podaj liczb� 5:");
    scanf("%d", &l5);

    minimum = l1;

    if (l2<minimum)
    {
      minimum = l2;
    }
    if (l3<minimum)
    {
      minimum = l3;
    }
    if (l4<minimum)
    {
      minimum = l4;
    }
    if (l5<minimum)
    {
      minimum = l5;
    }
    maximum = l1;
    if (l2>maximum)
    {
      maximum = l2;
    }
    if (l3>maximum)
    {
      maximum = l3;
    }
    if (l4>maximum)
    {
      maximum = l4;
    }
    if (l5>maximum)
    {
      maximum = l5;
    }
    printf("minimum = %d, maximum = %d\n", minimum, maximum);

    return(0);
}
