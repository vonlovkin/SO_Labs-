/*
Disciplina: [Sistemas Operacionais]
> Professor: Eduardo Ferreira Dos Santos
> Descrição: Lab01b - Introdução ao C (Exercício 14)
> Autores (as): Daniel Kabadayan Dias, Luana Miho Yasuda, Lucas Araujo Martins Da Silva
> Grupo: 5
> Turma: 04N11
*/

// Fonte do Exercícios: <https://www.inf.pucrs.br/~pinho/PRGSWB/Exercicios/Introducao/Introducao.html>

#include <stdio.h>
#include <string.h>

void inserirCaractere(char str[], char c, int posicao);

int main()
{
    char string[100], caractere;
    int posicao;

    printf("Entre com uma string: ");
    fgets(string, sizeof(string), stdin);

    printf("Digite o caractere a ser inserido: ");
    scanf("%c", &caractere);

    printf("Digite a posição em que o caractere será inserido: ");
    scanf("%d", &posicao);

    inserirCaractere(string, caractere, posicao);

    printf("Nova String: %s", string);
    return 0;
}

void inserirCaractere(char str[], char c, int posicao)
{
    int tamanho = strlen(str);
    int i;
    for (i = tamanho; i >= posicao; i--)
    {
        str[i + 1] = str[i];
    }
    str[posicao] = c;
}