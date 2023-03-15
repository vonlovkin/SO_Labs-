# Laboratorio de Sistemas Oeracionais - Grupo5
Repositório para a anexação de atividades de laboratório da disciplina de Sistemas Operacionais (4º semestre).

### Integrantes do grupo:
- Daniel Kabadayan Dias
- Luana Miho Yasuda
- Lucas Araujo Martins da Silva

### Seguem os arquivos pedidos no laboratório 02a de Sistemas Operacionais.
- process_id.c
- process_creation.c
- fork.c
- get_process_id.c
- create_process_chain.c
- README.md

#### Seguem as bibliotecas utilizadas e os respectivos exercícios em que aparecem.
- process_id.c (<unistd.h>)
- process_creation.c (<unistd.h>)
- fork.c (<sys/types.h>; <unistd.h>)
- get_process_id.c (<sys/types.h>; <unistd.h>)
- create_process_chain.c (<stdlib.h>; <unistd.h>)

### Resolução das últimas duas questões (questões 1 e 2).

##### Questão 1 - Rode o programa anterior para valores grandes de n. As mensagens sempre estar˜ao ordenadas pelo valor de i?
Não. Uma vez que o programa cria dois tipos de processos, pai e filho, as mensagens são ordenadas em paralelo a execução dos processos filho pelo sistema operacional. Portanto, nem sempre as mensagens estão ordenadas pelo valor de "i".

##### Questão 2 - O que acontece se o programa anterior escrevesse as mensagens para sys.stdout, usando print, ao invés de para sys.stderr?
A impressão das mensagens seria diferente. Isso ocorreria, pois o sys.stdout, ou "Standard Output", é usado mensagens regulares, isto é, o processo escreve saídas convencionais. Já o sys.stderr, ou "Standard Error", é usado para a saída de erros, isto é, o processo escreve um diagnóstico na saída.

### Instruções para compilação de programas:
Para compilar o arquivos com extensão .c deste diretório, basta acessar o diretório que contém o arquivo utilizando o comando "cd" do CMD do Windows e digitar o seguinte código: "gcc <nome_do_arquivo.c> -o <nome_do_executável>", caso o seu compilador seja o GCC.

Veja abaixo como compilar cada arquivo deste Laboratório.

##### process_id.c
gcc process_id.c -o <nome_do_executável>

##### process_creation.c
gcc process_creation.c -o <nome_do_executável>

##### fork.c
gcc fork.c -o <nome_do_executável>

##### get_process_id.c
gcc get_process_id.c -o <nome_do_executável>

##### create_process_chain.c
gcc create_process_chain.c -o <nome_do_executável>

### Comprovação dos resultados propostos:
Para comprovara os resultados dos algoritmos e programas criados, basta compilá-los, conforme as instruções do tópico acima e, em sequencia, acessar o diretório onde se localizam os executáveis gerados utilizando o comando "cd" do CMD do Windows e digitar o nome do executável (./<nome_do_exercutável> "<parâmetro (se houver)>" caso seu sistema seja Linux/MacOS).
 
Desta maneira, o programa será inicializado no próprio terminal e estará disponível para uso e teste.
