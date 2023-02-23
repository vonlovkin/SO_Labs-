/*
Disciplina: [Sistemas Operacionais] 
> Professor: Eduardo Ferreira Dos Santos
> Descrição: Lab01b - Introdução ao C (Exercício 4)
> Autores (as): Daniel Kabadayan Dias, Luana Miho Yasuda, Lucas Araujo Martins Da Silva
> Grupo: 5
> Turma: 04N11  
*/

// Fonte do Exercícios: <https://www.inf.pucrs.br/~pinho/PRGSWB/Exercicios/Introducao/Introducao.html>

#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[20], nome2[20], temp[20];
    int comparacao;

    printf("Entre com um prenome:\n");
    scanf("%s", nome1);
    printf("\nEntre com outro prenome:\n");
    scanf("%s", nome2);

    comparacao = strcmp(nome1, nome2);

    if (comparacao > 0)
    {
        // Se nome1 vem depois de nome2, troca os nomes
        strcpy(temp, nome1);
        strcpy(nome1, nome2);
        strcpy(nome2, temp);
    }

    printf("\nEm ordem alfabética ficariam: %s e %s\n", nome1, nome2);

    return 0;
}