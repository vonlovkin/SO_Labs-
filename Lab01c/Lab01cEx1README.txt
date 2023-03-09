O código começa com a inclusão das bibliotecas stdio.h e stdlib.h para as funções de entrada e saída de dados e para a função exit(), respectivamente. É então aberto um arquivo texto passado como argumento na linha de comando, verificando se o argumento foi passado corretamente. O arquivo é lido usando o fgets() e impresso na tela. Por fim, o arquivo é fechado.

Aqui é utilizada uma chamada de sistema para abrir o arquivo em "fopen" linha 26, uma chamada para ler linhas desse arquivo em "fgets" linha 33 e uma chamada para fechar o arquivo em "fclose" linha 38. Ou seja, ocorrem três chamadas de sistemas.

Para compilar o programa, execute o comando abaixo no terminal (supondo que o arquivo foi salvo como "Lab01cEx1.c"):

gcc Lab01cEx1.c -o cat 

Para executar, passe o nome do arquivo a ser lido como argumento:

./cat arquivo.txt