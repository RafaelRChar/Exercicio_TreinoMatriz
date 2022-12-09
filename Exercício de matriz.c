/* 1. Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros.
Ao final da leitura o programa deverá imprimir o número da linha que contém o
menor da soma e dos elementos dentre todos os números lidos. */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    //Variáveis.
    int matriz[3][3], somalinha[3], soma, menorSoma,MenorElem;
    int menor = 100000000;
    int i,j;

    //Para gerar a matriz.
    printf("Informe os elementos da Matriz Quadrada 3x3:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Indique o local: LINHA[%d] - COLUNA[%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    //Para Mostrar a Matriz.
    printf("\n");
    printf("Matriz 1:\n");
    printf("\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d |", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    //Para ver a soma das linha.
    for(i = 0; i < 3; i++)
    {
        soma = 0;
        for(j = 0; j < 3; j++)
        {
           soma += matriz[i][j];
        }
        somalinha[i] = soma;
        if(somalinha[i] < menor)
        {
            menor = somalinha[i];
            menorSoma = somalinha[i];
        }
    }
    //Matriz para ver linhas
    for(i = 0; i < 3; i++)
    {
        soma = 0;
        for(j = 0; j < 3; j++)
        {
           if (matriz[i][j] < menor)
           {
               menor = matriz[i][j];
               MenorElem = matriz[i][j];
           }
        }
    }
    //Para Mostrar linha.
    for(i = 0; i < 3; i++)
    {
        printf("\n Mostrando o resultado da linha [%d]: %d \n", i, somalinha[i]);
    }
        printf("\n Menor Valor das soma: [%d] \n", menorSoma);
        printf("\n Menor Valor das linha: [%d] \n", MenorElem);
}
