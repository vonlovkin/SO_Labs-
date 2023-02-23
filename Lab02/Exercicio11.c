/*
Disciplina: [Sistemas Operacionais] 
> Professor: Eduardo Ferreira Dos Santos
> Descrição: Lab01b - Introdução ao C (Exercício 11)
> Autores (as): Daniel Kabadayan Dias, Luana Miho Yasuda, Lucas Araujo Martins Da Silva
> Grupo: 5
> Turma: 04N11  
*/

// Fonte do Exercícios: <https://www.inf.pucrs.br/~pinho/PRGSWB/Exercicios/Introducao/Introducao.html>

#include <stdio.h>

#define linhas 3
#define colunas 3

void somarLinhas(int matriz[linhas][colunas], int linha1, int linha2)
{
    for (int j = 0; j < colunas; j++)
    {
        matriz[linha2][j] += matriz[linha1][j];
    }
}

void multiplicarLinhas(int matriz[linhas][colunas], int linha1, int linha2)
{
    for (int j = 0; j < colunas; j++)
    {
        matriz[linha2][j] *= matriz[linha1][j];
    }
}

int main()
{
    int matriz[linhas][colunas] = {{1, 2, 3},
                                   {4, 5, 6},
                                   {7, 8, 9}};
    printf("Matriz original:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Somar linha 1 com a linha 3 e resultado na linha 3
    somarLinhas(matriz, 0, 2);

    // Imprimir a nova matriz
    printf("\nNova matriz (linha 1 + linha 3, resultado na linha 3):\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Multiplicar linha 1 com a linha 2 e resultado na linha 2
    multiplicarLinhas(matriz, 1, 2);

    // Imprime a nova matriz
    printf("\nNova matriz (linha 2 * nova linha 3, resultado na linha 3):\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}