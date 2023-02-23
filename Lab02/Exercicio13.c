/*
Disciplina: [Sistemas Operacionais] 
> Professor: Eduardo Ferreira Dos Santos
> Descrição: Lab01b - Introdução ao C (Exercício 13)
> Autores (as): Daniel Kabadayan Dias, Luana Miho Yasuda, Lucas Araujo Martins Da Silva
> Grupo: 5
> Turma: 04N11  
*/

// Fonte do Exercícios: <https://www.inf.pucrs.br/~pinho/PRGSWB/Exercicios/Introducao/Introducao.html>

#include <stdio.h>
#include <string.h>

void removerCaractere(char str[], int posicao);

int main() {
   char string[100];
   int posicao;

   printf("Entre com uma string: ");
   fgets(string, sizeof(string), stdin);

   printf("Digite a posição do caractere a ser removido: ");
   scanf("%d", &posicao);

   removerCaractere(string, posicao);

   printf("Nova string: %s", string);
   return 0;
}

void removerCaractere(char str[], int posicao)
{
    int i;
    for (i = posicao; str[i] != '\0'; i++)
    {
        str[i] = str[i + 1];
    }
}