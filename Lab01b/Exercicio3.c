/*
Disciplina: [Sistemas Operacionais]
> Professor: Eduardo Ferreira Dos Santos
> Descrição: Lab01b - Introdução ao C (Exercício 3)
> Autores (as): Daniel Kabadayan Dias, Luana Miho Yasuda, Lucas Araujo Martins Da Silva
> Grupo: 5
> Turma: 04N11
*/

// Fonte do Exercícios: <https://www.inf.pucrs.br/~pinho/PRGSWB/Exercicios/Introducao/Introducao.html>

#include <stdio.h>

int main() {

    int n;

    do
    {
        printf("Enter an Odd Number: ");
        scanf("%d", &n);
    }
    while (n % 2 == 0);

    for (int i = 0; i <= (n / 2) + 1; i++)
    {
        for (int j = i + 1; j <= n - i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");

        for (int j = 0; j < (i + 1) * 2; j++)
            printf(" ");
    }

    return 0;
}