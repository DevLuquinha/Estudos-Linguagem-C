/*===============================================================

    Elabore um algoritmo que calculo e mostre o valor da �rea de um c�rculo.
    Sabe-se que: �rea = pi * raio2

    CURSO: ANALISE E DESENVOLVIMENTO DE SISTEMAS - ADS
    1� PER�ODO - DISCIPLINA DE ALGORITMO E L�GICA DE PROGRAMA��O
    Nome do aluno(a):
    1 SEMESTRE 2025
    Prof. Ernani Claudio Borges
    data: Fevereiro 2025

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
    float raio, area, pi;

    //INICIALIZAR VARIAVEIS
    raio = 0;
    area = 0;
    pi = 3.14; // Constante

    printf("\n Digite o raio: ");
    fflush(stdin);
    scanf("%f", &raio);

    area = raio * raio * pi;


    //FINALIZAR PROGRAMA
    printf("\n A area do circulo eh %.2f", area);
    printf ("\n\n\n Acabou ... Tchau ... obrigado ... \n\n\n");
}
