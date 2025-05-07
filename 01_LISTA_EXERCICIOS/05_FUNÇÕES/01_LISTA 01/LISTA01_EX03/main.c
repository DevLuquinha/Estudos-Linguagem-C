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
//===============================================================
//============== LOCAL PARA DECLARAR OS PROTOTIPOS ==============
//===============================================================

//===============================================================
//============== LOCAL PARA CRIAR OS M�DULOS DE FUN��ES =========
//===============================================================
void GetRadius(float *radius)
{
    printf("Digite o valor do RAIO: ");
    fflush(stdin);
    scanf("%f", &*radius);
}
//===============================================================
float RadiusIsValid(float radius)
{
    while(radius <= 0)
    {
        printf("\nDigite um valor POSITIVO para o RAIO: ");
        fflush(stdin);
        scanf("%f", &radius);
    }

    return radius;
}
//===============================================================
float POW(float base, float exp)
{
    float resul = 1;

    for(float i = 1; i <= exp; i++)
    {
        resul = resul * base;
    }
    return resul;
}
//===============================================================
void Volume(float radius)
{
    float volume = (4 * 3.14 * POW(radius, 3)) / 3;
    printf("\nO valor do volume da esfera com %.2f de raio: %.2f", radius, volume);
}
//===============================================================

//===============================================================
//==============  CODIGO PRINCIPAL ==============================
//===============================================================
int main()
{
    // CRIAR VARIAVEIS
    float radius = 0;

    // FUN��O QUE RECEBE O RAIO
    GetRadius(&radius);

    // VALIDAR SE � VALIDO
    radius = RadiusIsValid(radius);

    // CALCULAR VOLUME
    Volume(radius);

    // FINALIZAR PROGRAMA
    printf ("\n\n\n FIM DO PROGRAMA - VAI EMBORA DAQUI :/ \n\n\n");

    return 0;
}
