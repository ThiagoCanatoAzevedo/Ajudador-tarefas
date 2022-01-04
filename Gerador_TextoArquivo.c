//Bibliotecas que s�o importadas:
#include <stdio.h>
#include <stdlib.h>
#include <cs50.c>

//Cria a fun��o "main":
int main(void)
{
    // Cria vari�vel ponteiro para o arquivo:
    FILE *pont_arq;

    //abrindo o arquivo com tipo de abertura w
    pont_arq = fopen("ListaParaFazer.txt", "w");

    //Testando se o arquivo foi realmente criado:
    if(pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo!\n");
        return 1;
    }
    printf("Um arquivo .txt foi criado no seu computador!\n");

    //La�o "infinito":
    while(1){

        //Pega os itens do usu�rio:
        string item = get_string("","Quais itens ser�o adicionados: ");

        //Usando fprintf para armazenar a string no arquivo:
        fprintf(pont_arq, "%s\n", item);

        printf("Dados gravados com sucesso!\n");

        //Pede a letra (N/n ou S/s):
        char pergunta = get_char("Quer parar ou n�o (S/s ou N/n): ");

        // Verifica a letra digitada pelo usu�rio:
        if(pergunta == 'S' || pergunta == 's'){
		  	printf("Parando o programa...\n");
            break;
        }
        else if (pergunta == 'N' || pergunta == 'n'){
            continue;

        }
        else{
            printf("Essa letra � inv�lida. Vamos parar o programa, por�m, voc� pode ver tudo que escreveu no arquivo de texto criado!");
            break;
        }


    }

    //Usando fclose para fechar o arquivo:
    fclose(pont_arq);
}
