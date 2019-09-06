#include <stdio.h>
#include <stdlib.h>



int main ()
{
    int x, i, a, b, c, d, e, f, g, h;

    printf("Dado o conjunto A, tal que 0<=x<256, digite um numero que pertenca ao intervalo expresso.");
    scanf("%d", &x);



    for(i=0; i<7; i++)
    {
        if((x/2)<=1)
        {
            printf("none");

        }
        else
        {
            printf("%d\n", x%2);
            x=x/2;
        }
    }



}
