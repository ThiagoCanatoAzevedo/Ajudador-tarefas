#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *pont_arq;
    char pergunta;
    char item[100];

    pont_arq = fopen("ListaParaFazer.txt", "w");

    if (pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo!\n");
        return 1;
    }
    printf("Um arquivo .txt foi criado no seu computador!\n");

    while (1)
    {
        printf("Quais itens serão adicionados: ");
        fgets(item, sizeof(item), stdin);

        item[strcspn(item, "\n")] = '\0';

        fprintf(pont_arq, "%s\n", item);

        printf("Dados gravados com sucesso!\n");

        printf("Quer parar ou não (S/s ou N/n): ");
        scanf(" %c", &pergunta); 

        while (getchar() != '\n');  

        if (pergunta == 'S' || pergunta == 's')
        {
            printf("Parando o programa...\n");
            break;
        }
        else if (pergunta == 'N' || pergunta == 'n')
        {
            continue;
        }
        else
        {
            printf("Resposta inválida. O programa será interrompido.\n");
            break;
        }
    }

    fclose(pont_arq);
    return 0;
}
