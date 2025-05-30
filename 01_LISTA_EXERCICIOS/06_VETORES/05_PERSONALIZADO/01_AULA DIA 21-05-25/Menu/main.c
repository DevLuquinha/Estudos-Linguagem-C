/*===============================================================
    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1� PER�ODO - DISCIPLINA DE ALGORITMO E L�GICA DE PROGRAMA��O
    Nome do aluno(a): Lucas Emmanuel Rodrigues Firmino de Paula
    1 SEMESTRE 2025
    Prof. Ernani Claudio Borges
    data: Maio 2025

*/
//===============================================================
//===============================================================
//======== LOCAL PARA DECLARAR AS INCLUDES E VARS GLOBAIS =======
//===============================================================
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#define len 10

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================

//===============================================================
//============== LOCAL PARA CRIAR OS M�DULOS DE FUN��ES =========
//===============================================================
void PrintMenu()
{
    printf("=============================================================");
    printf("\n                       MENU PRINCIPAL");
    printf("\n=============================================================");
    printf("\n1) Histograma Horizontal");
    printf("\n2) Maior diferenca entre dois elementos consecutivos");
    printf("\n3) Maior, Menor numero e suas posicoes - e depois ordenar");
    printf("\n4) Finalizar");
    printf("\n=============================================================");
}
//===============================================================
void ClearVector(int vector[])
{
    for(int i = 0; i < len; i++)
        vector[i] = 0;
}
//===============================================================
int InputMenu()
{
    int index = 0;
    do
    {
        printf("\nInforme uma das opcoes acima (1, 2, 3 ou 4)....: ");
        fflush(stdin);
        scanf("%d", &index);

        if(index <= 0 || index > 4)
            printf("\nErro! O valor informado nao eh uma das opcoes do menu.");
    }while(index <= 0 || index > 4);

    system("cls");
    return index;
}
//===============================================================
void CreateHistogram(int range)
{
    for(int i = 0; i < range; i++)
        printf("*");
}
//===============================================================
int DifferenceNumbers(int num1, int num2)
{
    return num1 - num2;
}
//===============================================================
int GetSmallestNumber(int vector[])
{
    int number = 0;

    for(int i = 0; i < len; i++)
    {
        if(i == 0)
        {
            number = vector[0];
        }
        else
        {
            if(vector[i] != 0)
            {
                if(vector[i] < number)
                {
                    number = vector[i];
                }
            }
        }
    }

    return number;
}
//===============================================================
int IndexOf(int num, int vector[])
{
    int index = -1; // Caso retorne -1, pq n�o achou um index

    for(int i = len; i >= 0; i--)
    {
        if(vector[i] == num)
            index = i;
    }

    return index;
}
//===============================================================
void InputVector(int vector[], int opt)
{
    float num = 0;
    int numInt = 1;
    int i = 0;
    int endPosition;

    if(opt == 1)
    {
        while(numInt != 0 && i < len)
        {
            if(i == 0)
                printf("----------------HISTOGRAMA HORIZONTAL----------------");
            do
            {
                printf("\nDigite um numero inteiro e positivo para Vetor[%d]: ", i);
                fflush(stdin);
                scanf("%f", &num);

                numInt = num;

                if(numInt != num || numInt < 0)
                    printf("\nErro! Vc digitou um numero negativo ou com casas decimais!");

                if(numInt > 25)
                    printf("\nErro! Vc nao pode digitar um numero maior que 25.");
            }while(numInt != num || numInt < 0 || numInt > 25);

            if(numInt != 0)
            {
               vector[i] = numInt;
               i++;
            }
        }
    }
    else if(opt == 2)
    {
        int biggerDifference, posBiggerDifference = 0;

        int difference;

        numInt = 1; // Iniciar com algum valor diferente de 0
        i = 0;

        while(numInt != 0 && i < len) // Respons�vel por preencher vetor at� digitar 0
        {
            if(i == 0)
                printf("----------------Maior diferenca entre dois elementos consecutivos----------------");
            do
            {
                printf("\nDigite um numero positivo para o Vetor[%d]. Digite 0 para finalizar: ", i);
                fflush(stdin);
                scanf("%f", &num);

                numInt = num;

                if(numInt != num || numInt < 0)
                    printf("\nErro! Vc digitou um numero negativo ou com casas decimais!");
            }while(numInt != num || numInt < 0);

            if(numInt != 0 && i <= len)
            {
                vector[i] = numInt;
                i++;
            }
            else
                endPosition = i;
        }

        for(i = 0; i < endPosition - 1; i++)
        {
            difference = DifferenceNumbers(vector[i], vector[i + 1]);
            if(difference < biggerDifference)
            {
                biggerDifference = difference;
                posBiggerDifference = i;
            }
        }

        printf("\n\nA MAIOR DIFERENCA EH: %d na posicao %d e %d", biggerDifference, posBiggerDifference, posBiggerDifference + 1);
    }else if(opt == 3)
    {
        while(numInt != 0 && i < len)
        {
            if(i == 0)
                printf("----------------Maior, Menor e suas Posicoes----------------");
            do
            {
                printf("\nDigite um numero inteiro e positivo para Vetor[%d]: ", i);
                fflush(stdin);
                scanf("%f", &num);

                numInt = num;

                if(numInt != num || numInt < 0)
                    printf("\nErro! Vc digitou um numero negativo ou com casas decimais!");

            }while(numInt != num || numInt < 0);

            if(numInt != 0)
            {
               vector[i] = numInt;
               i++;
            }
        }
    }

}
//===============================================================
void ShowVector(int vector[], int opt)
{
    printf("\n=============================================================");
    if(opt == 1)
    {
        printf("\nPosicao  conteudo    histograma");
        for(int i = 0; i < len; i++)
        {
            if(vector[i] != 0)
            {
                printf("\n%7d %9d    ", i, vector[i]);
                CreateHistogram(vector[i]);
            }
        }
    }
    else if(opt == 2)
    {
        printf("\n");
        printf("VET: ");
        for(int i = 0; i < len; i++)
        {
            if(vector[i] != 0)
                printf("%2d ", vector[i]);
        }
        printf("\n-------------------------------------------------------------\n");
        printf("POS: ");
        for(int i = 0; i < len; i++)
        {
            if(vector[i] != 0)
                printf("%2d ", i);
        }
    }
    else if(opt == 3)
    {
        int smallestNum, biggerNum;
        int smallestNumIndex, biggerNumIndex;
        // Mostrar vetor de forma de entrada
        printf("\nVETOR FORMA DE ENTRADA\n");

        printf("VET: ");
        for(int i = 0; i < len; i++)
        {
            if(vector[i] != 0)
                printf("%2d ", vector[i]);
        }
        printf("\n-------------------------------------------------------------\n");
        printf("POS: ");
        for(int i = 0; i < len; i++)
        {
            if(vector[i] != 0)
                printf("%2d ", i);
        }

        // Calcular o menor e o maior
        smallestNum = GetSmallestNumber(vector);
        smallestNumIndex = IndexOf(smallestNum, vector);

        printf("\n\nO menor numero eh %d, que esta na posicao VET[%d]", smallestNum, smallestNumIndex);
    }
    printf("\n=============================================================");
}
//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    // CRIAR VARIAVEIS
    int vector[len];
    int optionSel;

    do
    {
        system("cls");
        // Mostra o Menu
        PrintMenu();

        optionSel = InputMenu(); // Recebe o valor da opcao digitada pelo usuario

        ClearVector(vector); // Inicializar - Limpar Vetor

        InputVector(vector, optionSel); // Recebe os valores para o vetor conforme a op��o selecionada

        ShowVector(vector, optionSel); // Mostra o vetor conforme a op��o selecionada

        if(optionSel != 4)
        {
            printf("\n\n Para volar para o menu aperte QUALQUER TECLA ");
            getch();
        }
    }while(optionSel != 4);
    system("cls");
    // FINALIZAR PROGRAMA
    printf ("\n\n\n FIM DO PROGRAMA - VAI EMBORA DAQUI :/ \n\n\n");

    return 0;
}
