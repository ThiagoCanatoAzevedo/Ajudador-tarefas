# Lista de Tarefas - C

Este projeto permite ao usuário criar uma lista de tarefas em um arquivo `.txt`, onde ele pode adicionar itens à lista e decidir se quer continuar ou parar de adicionar tarefas.

## Funcionalidades

- Cria um arquivo de texto (`ListaParaFazer.txt`) no diretório atual.
- Permite ao usuário adicionar tarefas à lista.
- Pergunta ao usuário se ele deseja continuar adicionando tarefas ou se deseja parar.
- O conteúdo do arquivo é armazenado com um item por linha.

## Como funciona

1. O programa cria um arquivo de texto chamado `ListaParaFazer.txt` no diretório onde o programa está sendo executado.
2. O usuário insere itens (tarefas) para a lista.
3. Após cada tarefa, o programa pergunta se o usuário quer continuar ou parar. Se o usuário escolher "S" ou "s", o programa termina. Se escolher "N" ou "n", ele continua permitindo a inserção de novas tarefas.
4. O arquivo é fechado corretamente ao final do processo.

## O que aprendi

- **Manipulação de arquivos em C**: Aprendi a trabalhar com arquivos no C, criando, escrevendo e fechando-os corretamente. A função `fopen()` foi usada para criar ou abrir o arquivo e `fprintf()` para escrever os dados no arquivo.
  
- **Leitura e escrita de strings**: Utilizei funções para capturar e manipular strings, como `getchar()` e `fgets()`, para garantir que a entrada do usuário fosse lida corretamente. Também aprendi a lidar com o buffer de entrada, evitando problemas com caracteres não lidos.

- **Controle de fluxo com `while` e `if`**: O programa foi estruturado com loops `while` para permitir que o usuário continue adicionando tarefas e condicional `if` para verificar se o usuário deseja parar ou continuar. Isso me ajudou a entender melhor como controlar o fluxo do programa.

- **Validação de entrada**: Para garantir que o programa funcione de maneira robusta, implementei a validação das respostas do usuário com base nas opções "S/s" para parar e "N/n" para continuar. Isso aumentou a confiabilidade e usabilidade do programa.

- **Desenvolvimento e compilação em C**: Aprendi sobre o processo de desenvolvimento e compilação de um programa em C. Isso incluiu a compilação com `gcc` e a execução do código gerado para testar seu funcionamento.

