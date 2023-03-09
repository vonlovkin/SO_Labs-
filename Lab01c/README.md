# Laboratorio de Sistemas Oeracionais - Grupo5
Repositório para a anexação de atividades de laboratório da disciplina de Sistemas Operacionais (4º semestre).

### Integrantes do grupo:
- Daniel Kabadayan Dias
- Luana Miho Yasuda
- Lucas Araujo Martins da Silva

### Seguem os arquivos pedidos no laboratório 01b de Sistemas Operacionais.
- Lab01cEX1.c
- Lab01cEX2.c
- README.md

#### Seguem as bibliotecas utilizadas e os respectivos exercícios em que aparecem.
- Lab01cEX1.c (<stdlib.h>)
- Lab01cEX2.c (<stdlib.h>)

### Explicação e lógica de cada programa.

##### Lab01cEX1.c
O código começa com a inclusão das bibliotecas stdio.h e stdlib.h para as funções de entrada e saída de dados e para a função exit(), respectivamente. É então aberto um arquivo texto passado como argumento na linha de comando, verificando se o argumento foi passado corretamente. O arquivo é lido usando o fgets() e impresso na tela. Por fim, o arquivo é fechado.

Aqui é utilizada uma chamada de sistema para abrir o arquivo em "fopen" linha 26, uma chamada para ler linhas desse arquivo em "fgets" linha 33 e uma chamada para fechar o arquivo em "fclose" linha 38. Ou seja, ocorrem três chamadas de sistemas.

##### Lab01cEX2.c
O código cópia de um arquivo de entrada para um arquivo de saída. O programa recebe como argumentos da linha de comando o nome do arquivo de entrada e o nome do arquivo de saída, e é executado da seguinte maneira: Se ambos os arquivos puderem ser abertos com sucesso, o programa começa a copiar o conteúdo do arquivo de entrada para o arquivo de saída, usando um laço while e as funções fgetc() e fputc() da biblioteca padrão do C. O laço continua até que a função fgetc() retorne o valor EOF.

Aqui foram utilizadas duas chamadas de sistema para abrir arquivo em "fopen" linhas 22 e 28, duas chamadas para fechar o arquivo em "fclose" linhas 40 e 41, somadas às múltiplas chamadas por caracteres lidos e por caracteres escritos nos arquivos em "fgetc" e "fputc" linhas 35 e 36. Ou seja, ocorrem 4 + (caracteres lidos + caracteres escritos) chamadas de sistemas.

### Instruções para compilação de programas:
Para compilar o arquivos com extensão .c deste diretório, basta acessar o diretório que contém o arquivo utilizando o comando "cd" do CMD do Windows e digitar o seguinte código: "gcc <nome_do_arquivo.c> -o <nome_do_executável>", caso o seu compilador seja o GCC.

Veja abaixo como compilar cada arquivo deste Laboratório.

##### Lab01cEx1.c
gcc Lab01cEx2.c -o cp 

##### Lab01cEX2.c
gcc Lab01cEx2.c -o cp 

### Comprovação dos resultados propostos:
Para comprovara os resultados dos algoritmos e programas criados, basta compilá-los, conforme as instruções do tópico acima e, em sequencia, acessar o diretório onde se localizam os executáveis gerados utilizando o comando "cd" do CMD do Windows e digitar o nome do executável (./<nome_do_exercutável> caso seu sistema seja Linux/MacOS).
 
Desta maneira, o programa será inicializado no próprio terminal e estará disponível para uso e teste.

Veja abaixo como executar cada arquivo deste Laboratório para testar.

##### Lab01cEX1.c
./cat arquivo.txt

##### Lab01cEX2.c
./cp arquivo_de_entrada arquivo_de_saida