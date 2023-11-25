#ifndef BD_H
#define BD_H

// Dados do visitante.
struct s_visitante
{
    char nome[100];
};

// Dados do ingresso.
struct s_ingresso
{
    char diaVisita[30];
    char tipo[20];
    int numero;
};

// Dados do tema da palestra.
struct s_tema
{
    char nome[100];
    char descricao[1000];
};

// Perguntas em forma de constantes, desta maneira as variáveis não têm armazenamento local.
static const char *perguntas[] = {
    "1?",
    "2?",
    "3?",
    "4?",
    "5?",
    "6?",
    "7?",
    "8?",
    "9?",
    "10?",
    NULL
};

#endif
