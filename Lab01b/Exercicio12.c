/*
Disciplina: [Sistemas Operacionais] 
> Professor: Eduardo Ferreira Dos Santos
> Descrição: Lab01b - Introdução ao C (Exercício 12)
> Autores (as): Daniel Kabadayan Dias, Luana Miho Yasuda, Lucas Araujo Martins Da Silva
> Grupo: 5
> Turma: 04N11  
*/

// Fonte do Exercícios: <https://www.inf.pucrs.br/~pinho/PRGSWB/Exercicios/Introducao/Introducao.html>

#include <stdio.h>
#include <string.h>

int buscaCaractere(char *str, char c);

int main()
{
    char string[100], caractere;

    printf("Entre com uma string: ");
    fgets(string, sizeof(string), stdin);

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    int posicao = buscaCaractere(string, caractere);
    if (posicao == -1)
    {
        printf("O caractere '%c' não foi encontrado em %s\n", caractere, string);
    }
    else
    {
        printf("O caractere '%c' foi encontrado na posição %d da string %s\n", caractere, posicao, string);
    }
    return 0;
}

int buscaCaractere(char *str, char c)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            return i;
        }
    }
    return -1;
}