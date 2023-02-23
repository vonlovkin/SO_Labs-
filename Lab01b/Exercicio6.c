/*
Disciplina: [Sistemas Operacionais] 
> Professor: Eduardo Ferreira Dos Santos
> Descrição: Lab01b - Introdução ao C (Exercício 6)
> Autores (as): Daniel Kabadayan Dias, Luana Miho Yasuda, Lucas Araujo Martins Da Silva
> Grupo: 5
> Turma: 04N11  
*/

// Fonte do Exercícios: <https://www.inf.pucrs.br/~pinho/PRGSWB/Exercicios/Introducao/Introducao.html>

#include <stdio.h>

int main()
{
    int matriz[3][3], transposta[3][3];

    // Ler a matriz de teclado
    printf("Entre com os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Elemento a[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Criar a transposta
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transposta[i][j] = matriz[j][i];
        }
    }

    // Imprimir a matriz transposta
    printf("\nMatriz transposta:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}