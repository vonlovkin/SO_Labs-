/*
Disciplina: [Sistemas Operacionais] 
> Professor: Eduardo Ferreira Dos Santos
> Descrição: Lab01b - Introdução ao C (Exercício 10)
> Autores (as): Daniel Kabadayan Dias, Luana Miho Yasuda, Lucas Araujo Martins Da Silva
> Grupo: 5
> Turma: 04N11  
*/

// Fonte do Exercícios: <https://www.inf.pucrs.br/~pinho/PRGSWB/Exercicios/Introducao/Introducao.html>

#include <stdio.h>

#define linhas 3
#define colunas 3

void multiplicarLinha(int matriz[linhas][colunas], int linha, int num)
{
    for (int j = 0; j < colunas; j++)
    {
        matriz[linha][j] *= num;
    }
}

void multiplicarColuna(int matriz[linhas][colunas], int coluna, int num)
{
    for (int i = 0; i < linhas; i++)
    {
        matriz[i][coluna] *= num;
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

    // Multiplicar a linha 2 por 2
    multiplicarLinha(matriz, 1, 2);

    // Imprimir a nova matriz
    printf("\nNova matriz com linha 2 * 2:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Multiplicar a coluna 3 por -2
    multiplicarColuna(matriz, 2, -2);

    // Imprimir a nova matriz
    printf("\nNova matriz com coluna 3 * -2:\n");
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