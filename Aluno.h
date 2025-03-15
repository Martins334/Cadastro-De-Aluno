#ifndef ALUNO_H
#define ALUNO_H

#define MAX_ALUNOS 100
#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
} Aluno;

void cadastrarAluno(Aluno alunos[], int *total);
void listarAlunos(Aluno alunos[], int total);
void buscarAluno(Aluno alunos[], int total);

#endif
