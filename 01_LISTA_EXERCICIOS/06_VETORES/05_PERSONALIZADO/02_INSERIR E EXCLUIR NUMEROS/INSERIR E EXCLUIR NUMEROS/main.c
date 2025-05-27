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
#define len 20
//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================

//===============================================================
//============== LOCAL PARA CRIAR OS M�DULOS DE FUN��ES =========
//===============================================================
void ClearVector(int vector[])
{
    for(int i = 0; i < len; i++)
        vector[i] = 0;
}
//===============================================================
int GetNotNullOrRepeated(int vector[])
{
    int num, hasNum;

    do
    {
        hasNum = num = 0;
        do // N�o Gerar numeros Nulos
        {
            num = rand() % (len + 1);
        }while(num == 0);

        for(int i = 0; i < len; i++)
        {
            if(vector[i] == num)
                hasNum = 1;
        }

        if(hasNum == 0)
            return num;

    }while(hasNum == 1);
}
//===============================================================
int GetLastIndex(int vector[])
{
    int index = 0;
    for(int i = 0; i < len; i++)
    {
        if(vector[i] == 0 && index == 0)
            index = i;
    }

    return index - 1;
}
//===============================================================
void OrderVector(int vector[])
{
    int lastIndex = GetLastIndex(vector); // O index do �ltimo item da lista

    for(int j = 0; j < lastIndex; j++) // Repete a quantidade de vezes do vetor
    {
        for(int i = 0; i < lastIndex - 1; i++)
        {
            auxValue = 0;
            if(vector[i] > vector[i+1])
            {
                auxValue = vector[i];

                // Troca o valor. Ex: [3, 2] --> [2, 3]
                vector[i] = vector[i+1];
                vector[i+1] = auxValue;
            }
        }
    }
}
//===============================================================
void FillRandomNumbers(int vector[], int vectorLen)
{
    int num = 0;
    for(int i = 0; i < vectorLen; i++)
    {
        vector[i] = GetNotNullOrRepeated(vector);
    }
}
//===============================================================
void ShowVector(int vector[])
{
    int col = 0;

    for(int i = 0; i < len; i++)
    {
        if(vector[i] != 0)
        {
            if(col % 5 == 0)
            {
                printf("\n");
                col = 0;
            }
            Sleep(75);
            printf("%6d", vector[i]);
            col++;
        }
    }
}
//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    /* ESPECIFICA��ES DA ATIVIDADE
       1) Fun��o para preencher at� a metade de linhas do vetor
       2) Fun��o para validar corretivamente durante a entrada para
          n�o ter zero nem numeros repetidos
       3) Fun��o para ordenar o vetor em ordem crescente
       4) Fun��o para mostrar o vetor at� a posi��o em que est� sendo utilizada
       5) Fun��o para pesquisar no vetor a existencia ou n�o do n�mero a ser inserido
       6) Fun��o para receber o n�meros de pesquisa e validar corretivamente n�o menor que 1

       -------------------------------------------------------------------------------------
       1) Ser� utilizada apenas um vetor para inser��o e/ou exclus�o (proibido uso de
          outro vetor)
       2) S� criar o menu ap�s preencher e ordenar o vetor at� a posi��o em que foi
          preenchida.
    */

    // CRIAR VARIAVEIS
    int vector[len];

    // LIMPA O VETOR
    ClearVector(vector);

    printf("======VETOR EM FORMA DE ENTRADA======");

    // Preencher vetor com numeros aleatorios at� a metade
    FillRandomNumbers(vector, len/2);

    // VETOR EM FORMA DE ENTRADA
    ShowVector(vector);

    // VETOR ORDENADO
    printf("\n===========VETOR ORDENADO===========");
    OrderVector(vector);
    ShowVector(vector);


    // FINALIZAR PROGRAMA
    printf ("\n\n\n FIM DO PROGRAMA - VAI EMBORA DAQUI :/ \n\n\n");

    return 0;
}
