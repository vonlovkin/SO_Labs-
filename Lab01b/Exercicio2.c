/*
Disciplina: [Sistemas Operacionais] 
> Professor: Eduardo Ferreira Dos Santos
> Descrição: Lab01b - Introdução ao C (Exercício 2)
> Autores (as): Daniel Kabadayan Dias, Luana Miho Yasuda, Lucas Araujo Martins Da Silva
> Grupo: 5
> Turma: 04N11  
*/

// Fonte do Exercícios: <https://www.inf.pucrs.br/~pinho/PRGSWB/Exercicios/Introducao/Introducao.html>

#include <stdio.h>

int main()
{
    float n1, n2, n3, me, ma;
    char conceito;

    printf("Nota da N1: ");
    scanf("%f", &n1);

    printf("Nota da N2: ");
    scanf("%f", &n2);

    printf("Nota da N3: ");
    scanf("%f", &n3);

    printf("Nota da ME: ");
    scanf("%f", &me);

    ma = (n1 + n2*2 + n3*3 + me) / 7.0;

    if (ma >= 9.0)
    {
        conceito = 'A';
    } else if (ma >= 7.5 && ma < 9.0)
    {
        conceito = 'B';
    } else if (ma >= 6.0 && ma < 7.5)
    {
        conceito = 'C';
    } else if (ma >= 4.0 && ma < 6.0)
    {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    printf("Conceito: %c\n", conceito);

    return 0;
}