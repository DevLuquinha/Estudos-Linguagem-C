/*===============================================================
    Elabore um algoritmo que receba o nome de duas pessoas e mostre no v�deo a uni�o
    (concatena��o) destes dois nomes.

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1� PER�ODO - DISCIPLINA DE ALGORITMO E L�GICA DE PROGRAMA��O
    Nome do aluno(a): Lucas Emmanuel Rodrigues Firmino de Paula
    1 SEMESTRE 2025
    Prof. Ernani Claudio Borges
    data: Mar�o 2025

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

//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================






//===============================================================
//============== LOCAL PARA CRIAR OS M�DULOS DE FUN��ES =========
//===============================================================

//===============================================================

//===============================================================

//===============================================================

//===============================================================

//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    //CRIAR VARIAVEIS
    char nome1[100], nome2[100], nomesConcat[200];

    //INICIALIZAR VARIAVEIS
    strcpy(nome1, "");
    strcpy(nome2, "");
    strcpy(nomesConcat, "");

    printf("\nDigite o nome1: ");
    fflush(stdin);
    gets(nome1);

    printf("\nDigite o nome2: ");
    fflush(stdin);
    gets(nome2);

    strcat(nomesConcat, nome1);
    strcat(nomesConcat, " e ");
    strcat(nomesConcat, nome2);

    //strcpy(nomesConcat, nome1 + nome2);
    // strcpy(nomesConcat, nome2);

    //FINALIZAR PROGRAMA
    printf("\nNomes concatenados: %s", nomesConcat);
    printf ("\n\n\n FIM DO PROGRAMA, VALEUUUU :) \n\n\n");

    return 0;
}
