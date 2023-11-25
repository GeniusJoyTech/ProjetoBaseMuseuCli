// saida.c
#include <stdio.h>
#include <stdlib.h>

#include "bd.h"

int main(void) {
    char resposta[100];
    FILE *pont_arq;

    pont_arq = fopen("repostas.csv", "a");

    if (pont_arq == NULL) {
        printf("Não foi possível a abertura do arquivo.\n");
        exit(1);
    }

    for (int i = 0; perguntas[i] != NULL; i++) {
        fprintf(pont_arq, perguntas[i]);
        fprintf(pont_arq, ", ");
    }
    fprintf(pont_arq, "\n");

    for (int i = 0; perguntas[i] != NULL; i++) {
        printf("%s\n", perguntas[i]);
        printf("Resposta: ");
        scanf("%s", resposta);
        fprintf(pont_arq, "%s, ", resposta);
    }

    fclose(pont_arq);

    return 0;
}
