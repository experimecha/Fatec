
#include<stdio.h>

int main(void)

{
    float valor_transacao=0;
    float comissao=0; /*o programa tava dando problema porque voce estava fazendo contas com variaveis que ainda nao 
    haviam sido digitadas pelo usuario.
    Além disso, a conta estava errada, por exemplo:
    float comissao_1 = 1.7/100 + 30;
    Comissao de: %.2f\n",valor_transacao * comissao_1
    mas isso eh mais facil eu explicar pessoalmente xD
    */

    printf("Digite o valor da transacao:\n");
    scanf("%f", &valor_transacao);

    if (((valor_transacao)*(1.7/100) + 30)<=39)
    {
        printf("Comissao minima, de 39 reais");
    }
    else if (valor_transacao <= 2500) /*aqui voce estava colocando os numeros tipo assim "2.500", como costumamos escrever 
        em portugues, porém em C o compilador entende que o ponto é referente à float, e por tbm isso seus resultados saíam 
        esquisitos */
    {
        comissao = (((valor_transacao)*(1.7/100)) + 30);
        printf("Comissao de: %.2f\n", comissao);
    }
    
    else if (valor_transacao >= 2501 && valor_transacao <= 6250)
    {
        comissao =(((valor_transacao)*(0.66/100)) + 56);
        printf("Comissao de: %.2f\n", comissao);
    }

    else if (valor_transacao >= 6251 && valor_transacao <= 20000)
    {
        comissao=(((valor_transacao)*(0.34/100)) + 76);
        printf("Comissao de: %.2f\n", comissao);
    }

    else if (valor_transacao >= 20001 && valor_transacao <= 50000)
    {
        comissao = (((valor_transacao)*(0.22/100)) + 100);
        printf("Comissao de: %.2f\n", comissao);
    }

    else if (valor_transacao >= 50001 && valor_transacao <= 500000)
    {
        comissao = (((valor_transacao)*(0.11/100)) + 155);
        printf("Comissao de: %.2f\n", comissao);
    }

    else if (valor_transacao > 500000) 
    {
        comissao =(((valor_transacao)*(0.09/100)) + 255);
        printf("Comissao de: %.2f\n", comissao);
    }

    return 0;
}

