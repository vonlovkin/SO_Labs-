O código cópia de um arquivo de entrada para um arquivo de saída. O programa recebe como argumentos da linha de comando o nome do arquivo de entrada e o nome do arquivo de saída, e é executado da seguinte maneira: Se ambos os arquivos puderem ser abertos com sucesso, o programa começa a copiar o conteúdo do arquivo de entrada para o arquivo de saída, usando um laço while e as funções fgetc() e fputc() da biblioteca padrão do C. O laço continua até que a função fgetc() retorne o valor EOF.

Aqui foram utilizadas duas chamadas de sistema para abrir arquivo em "fopen" linhas 22 e 28, duas chamadas para fechar o arquivo em "fclose" linhas 40 e 41, somadas às múltiplas chamadas por caracteres lidos e por caracteres escritos nos arquivos em "fgetc" e "fputc" linhas 35 e 36. Ou seja, ocorrem 4 + (caracteres lidos + caracteres escritos) chamadas de sistemas.

Para compilar o programa, execute o comando abaixo no terminal (supondo que o arquivo foi salvo como "Lab01cEx2.c"):

gcc Lab01cEx2.c -o cp 

Para executar, passe o nome do arquivo a ser copiado e o nome do arquivo destino da cópia:

./cp arquivo_de_entrada arquivo_de_saida