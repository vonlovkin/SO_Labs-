/*
Disciplina: [Sistemas Operacionais] 
> Professor: Eduardo Ferreira Dos Santos
> Descrição: Lab01b - Introdução ao C (Exercício 7)
> Autores (as): Daniel Kabadayan Dias, Luana Miho Yasuda, Lucas Araujo Martins Da Silva
> Grupo: 5
> Turma: 04N11  
*/

// Fonte do Exercícios: <https://www.inf.pucrs.br/~pinho/PRGSWB/Exercicios/Introducao/Introducao.html>

#include <stdio.h>
#include <string.h>

#define TAMANHO 3

struct Pessoa
{
    char nome[30];
    int idade;
    float peso;
    float altura;
};

int main()
{
    struct Pessoa pessoas[TAMANHO];
    int i;

    // Ler os dados das pessoas do teclado
    for (i = 0; i < TAMANHO; i++)
    {
        printf("\nEntre com o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);

        printf("Entre com a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);

        printf("Entre com o peso da pessoa %d (kg): ", i + 1);
        scanf("%f", &pessoas[i].peso);

        printf("Entre com a altura da pessoa %d (metros): ", i + 1);
        scanf("%f", &pessoas[i].altura);
    }

    // Imprimir os dados das pessoas
    printf("\n\nDados das pessoas:\n");
    for (i = 0; i < TAMANHO; i++)
    {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d anos\n", pessoas[i].idade);
        printf("Peso: %.2f kg\n", pessoas[i].peso);
        printf("Altura: %.2f m\n\n", pessoas[i].altura);
    }

    return 0;
}