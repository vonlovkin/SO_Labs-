/*
Disciplina: [Sistemas Operacionais] 
> Professor: Eduardo Ferreira Dos Santos
> Descrição: Lab01b - Introdução ao C (Exercício 9)
> Autores (as): Daniel Kabadayan Dias, Luana Miho Yasuda, Lucas Araujo Martins Da Silva
> Grupo: 5
> Turma: 04N11  
*/

// Fonte do Exercícios: <https://www.inf.pucrs.br/~pinho/PRGSWB/Exercicios/Introducao/Introducao.html>

#include <stdio.h>
#include <stdlib.h>

#define linhas 3
#define colunas 3

// FUNCAO CRIADA PARA O EXERCICIO USANDO ABS() DE STDLIB
void moduloNegativos(int matriz[linhas][colunas])
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] < 0)
            {
                matriz[i][j] = abs(matriz[i][j]);
            }
        }
    }
}

// TESTE
int main()
{
    int matriz[linhas][colunas];

    // Ler os elementos da matriz do teclado
    printf("Entre com os elementos da matriz %dx%d:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("Elemento a[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Substituir os negativos por seus módulos
    moduloNegativos(matriz);

    // Imprimir a matriz com os negativos substituídos
    printf("\nMatriz com negativos substituídos por seus módulos:\n");
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