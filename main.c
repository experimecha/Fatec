#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int validation(float numero)
{
    if(numero<0)
    {
        printf("Nao pode ser numero negativo. \n" );
        return -1;
    }
    if(numero>(int)numero)
    {
        printf ("Nao pode ser numero decimal. \n");
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int A, R, V, T=0, AR, AV, RV, C, AA, RR, VV, NAR, NAV, NRV, A1, G;
    float F;

    do
    {
        printf("Quantidade TOTAL de carros:");
        scanf("%f", &F);
        if (validation(F)==0)
        {
            T=(int)F;
        }
    }
    while (T<=0);
    // *****************************************************************
    do
    {
        printf("Quantidade de carros que possuem AR CONDICIONADO:");
        scanf("%f", &F);
        if (F>T)
        {
            printf("Nao pode ser maior que o total. \nQuantidade de carros que possuem AR CONDICIONADO:");
            scanf("%f", &F);
            A=(int)F;
        }
        else
        {
            A=(int)F;
        }
    }
    while (validation(F)!=0 || F>T);
    // ****************************************************************
    do
    {
        printf("Quantidade de carros que possuem RADIO:");
        scanf("%f", &F);
        if (F>T)
        {
            printf("Nao pode ser maior que o total. \nQuantidade de carros que possuem RADIO:");
            scanf("%f", &F);
            R=(int)F;
        }
        else
        {
            R=(int)F;
        }
    }
    while (validation(F)!=0 || F>T);
    // ****************************************************************
    do
    {
        printf("Quantidade de carros que possuem VIDRO ELETRICO:");
        scanf("%f", &F);
        if (F>T)
        {
            printf("Nao pode ser maior que o total. \nQuantidade de carros que possuem VIDRO ELETRICO:");
            scanf("%f", &F);
            V=(int)F;
        }
        else
        {
            V=(int)F;
        }
    }
    while (validation(F)!=0 || F>T);
    // ****************************************************************

    if(A==T&&R==T&&V==T)
    {
        printf("Quantidade de carros COMPLETOS (com ar, radio e vidro):");
        printf("%i\n", T);
        C=T;
        printf("Quantidade de carros que possuem AR e RADIO:");
        printf("%i\n", T);
        AR=T;
        printf("Quantidade de carros que possuem AR e VIDRO:");
        printf("%i\n", T);
        AV=T;
        printf("Quantidade de carros que possuem RADIO e VIDRO:");
        printf("%i\n", T);
        RV=T;
    }
    else
    {
        // ****************************************************************

        do
        {
            printf("Quantidade de carros COMPLETOS (com ar, radio e vidro):");
            scanf("%f", &F);
            if (F>T || F>A || F>R || F>V)
            {
                printf("Valor invalido. \nQuantidade de carros COMPLETOS (com ar, radio e vidro):");
                scanf("%f", &F);
                C=(int)F;
            }
            else
            {
                C=(int)F;
            }
        }
        while (validation(F)!=0 || F>T || F>A || F>R || F>V);
        // ****************************************************************
        do
        {
            printf("Quantidade de carros que possuem AR e RADIO:");
            scanf("%f", &F);
            if (F>T || F>A || F>R)
            {
                printf("Valor invalido. \nQuantidade de carros que possuem AR e RADIO:");
                scanf("%f", &F);
                AR=(int)F;
            }
            else
            {
                AR=(int)F;
            }
        }
        while (validation(F)!=0 || F>T || F>A || F>R);
        // ****************************************************************
        do
        {
            printf("Quantidade de carros que possuem AR e VIDRO ELETRICO:");
            scanf("%f", &F);
            if (F>T || F>A || F>V)
            {
                printf("Valor invalido. \nQuantidade de carros que possuem AR e VIDRO ELETRICO:");
                scanf("%f", &F);
                AV=(int)F;
            }
            else
            {
                AV=(int)F;
            }
        }
        while (validation(F)!=0 || F>T || F>A || F>V);
        // ****************************************************************
        do
        {
            printf("Quantidade de carros que possuem RADIO e VIDRO ELETRICO:");
            scanf("%f", &F);
            if (F>T || F>A || F>V)
            {
                printf("Valor invalido. \nQuantidade de carros que possuem RADIO e VIDRO ELETRICO:");
                scanf("%f", &F);
                RV=(int)F;
            }
            else
            {
                RV=(int)F;
            }
        }
        while (validation(F)!=0 || F>T || F>R || F>V);
        // ****************************************************************
    }
    system("pause");
    NRV=RV-C;
    NAV=AV-C;
    NAR=AR-C;
    printf("\nConclusoes:\t");
    printf("\nQuantidade de carros APENAS COM AR: %i", (AA=A-C-NAR-NAV));
    printf("\nQuantidade de carros APENAS COM VIDRO: %i", (VV=V-C-NAV-NRV));
    printf("\nQuantidade de carros APENAS COM RADIO: %i", (RR=R-C-NAR-NRV));
    printf("\nQuantidade de carros com RADIO e VIDRO (SEM AR): %i", NRV);
    printf("\nQuantidade de carros com AR e RADIO (SEM VIDRO): %i", NAR);
    printf("\nQuantidade de carros com APENAS UMA DAS OPCOES: %i", (A1=A+V+R-3*C-2*NAR-2*NAV-2*NRV));
    printf("\nQuantidade de CARROS-GELADEIRA (apenas MOTOR E PORTA): %i\n", (G=T-VV-RR-NRV-A));
    system ("pause");
    return 0;
}
