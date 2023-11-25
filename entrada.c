#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "bd.h"

int main(void) {
    srand(time(NULL));

    unsigned int qntIng;
    int dVisita;

    struct s_visitante vis;

    printf("Quantidade de ingressos a serem comprados: ");
    scanf("%u", &qntIng);

    struct s_ingresso ing[qntIng];

    printf("Nome do visitante: ");
    scanf("%s", vis.nome);

    for (unsigned int i = 0; i < qntIng; i++) {
        printf("Informe o dia da visita do ingresso %u ('1' para segunda - obra 1, '2' para quarta obra - 2, '3' para terca obra - 3, 4 para domingo - obra 4): ", i + 1);
        scanf("%i", &dVisita);
        if (dVisita == 1) {
            strcpy(ing[i].diaVisita, "segunda - obra 1");
        } else if (dVisita == 2) {
            strcpy(ing[i].diaVisita, "quarta - obra 2");
        } else if (dVisita == 3) {
            strcpy(ing[i].diaVisita, "terca - obra 3");
        } else if (dVisita == 4) {
            strcpy(ing[i].diaVisita, "domingo - obra 4");
        } else {
            printf("Por favor, respeite a sequência informada.\n");
            strcpy(ing[i].diaVisita, "Ingresso invalido.");
        }

        printf("Informe o tipo de visita do ingresso %u (inteira, meia ou isento): ", i + 1);
        scanf("%s", ing[i].tipo);

        ing[i].numero = rand();
        printf("\n\n\n\n");

    }

    for (unsigned int i = 0; i < qntIng; i++) {
        printf("Ticket numero: %d\n_________________________________________\nVisita: %s\nVisitante: %s\nTipo de ingresso: %s\n_________________________________________\n\n\n",
               ing[i].numero, ing[i].diaVisita, vis.nome, ing[i].tipo);
    }

    return 0;
}
