#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int value = 5;

int main()
{
  /* Armazena descritores do arquivo pipe. */
  int fd[2];

  /* Verifica se a criação do pipe foi bem-sucedida. */
  if (pipe(fd) == -1)
  {
    /* Caso seja mal-sucedida. */
    perror("pipe");
    
    return 1;
  }

  /* Criação de novo processo. */
  pid_t pid = fork();

  /* Executado pelo processo filho. */
  if (pid == -1)
  {
    perror("fork");
    
    return 1;
  }
  else if (pid == 0)
  {
    printf("Entrei no filho!\n");
    value += 15;
    close(fd[0]);
    /* Escreve descritor do arquivo pipe em "fd[1]". */
    write(fd[1], &value, sizeof(value)); 
    /* Fecha descritor e retorna 0. */
    close(fd[1]);
    
    return 0;
  }
  /* Executado pelo processo pai. */
  else
  {
    /* Chama a função "wait()" para esperar o término do processo filho. */
    wait(NULL);
    /* Descritor do arquivo de escrita é fechado. */
    close(fd[1]);
    /* Leitura de "value" do arquivo pipe usando função "read()."
       Descritor de leitura salvo em "fd[0]". */
    read(fd[0], &value, sizeof(value));
    /* Descritor do arquivo de leitura é fechado. */
    close(fd[0]);
    
    printf("PARENT: value = %d\n", value); /* LINE A */
    
    return 0;
  }
}
