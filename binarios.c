#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, x;
    int binario[8];

    printf("Dado o conjunto A, tal que 0<=x<256, digite um numero que pertenca ao intervalo expresso.");
    scanf("%d", &x); //aqui o usuario pode digitar qualquer numero que ele deseje converter para binário, de 0 a 256.
    for (i=1; i<9; i++)
 
    {
        binario[i]=x%2; /* a conta que ocorre dentro desse for é que o valor atribuído à variável x, que no primeiro 
        loop é o valor digitado pelo usuario, será dividido por 2, e o resto dessa divisão (ou seja, a div) será 
        armazenada no vetor "binario". os únicos resultados possíveis para uma divisão por 2 são 0 e 1. 
        Zero caso o numero seja par, e UM, caso o numero seja ímpar. portanto, os únicos valores que serão armazenados 
        no array 'binário' serão 0 e 1.
        O contador inicia em 1 e vai até 8, tal como o vetor 'binario', que também tem 8 slots, e portanto, o
        mesmo contador do loop serve também como localização dos slots do array 'binario'*/
        x=(x/2); /*aqui, será atribuído um novo valor à variável x. o novo valor será o próprio x, (que no
        primeiro loop é o valor digitado pelo usuário) dividido por 2, para que então após ser divido, 
        volte ao início do loop e realize novamente o processo até que chegue ao fim do contador*/
    }
    for(i=8; i>0; i--)
    {
        printf("%d", binario[i]); /*a ideia aqui era printar os valores armazenados no array 'binario' em ordem reversa*/
    }
}
