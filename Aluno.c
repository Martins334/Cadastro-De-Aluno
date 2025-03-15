#include "aluno.h"
#include <string.h>

void cadastrarAluno(Aluno alunos[], int *total) {
    if (*total >= MAX_ALUNOS) {
        printf("Limite de alunos atingido!\n");
        return;
    }

    printf("Digite o nome do aluno: ");
    fgets(alunos[*total].nome, 50, stdin);
    alunos[*total].nome[strcspn(alunos[*total].nome, "\n")] = '\0'; 

    printf("Digite a idade do aluno: ");
    scanf("%d", &alunos[*total].idade);
    getchar();
    (*total)++;
    printf("Aluno cadastrado com sucesso!\n");
}

void listarAlunos(Aluno alunos[], int total) {
    if (total == 0) {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    printf("\n--- Lista de Alunos ---\n");
    for (int i = 0; i < total; i++) {
        printf("Nome: %s | Idade: %d\n", alunos[i].nome, alunos[i].idade);
    }
}

void buscarAluno(Aluno alunos[], int total) {
    if (total == 0) {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    char nomeBusca[50];
    printf("Digite o nome do aluno para buscar: ");
    fgets(nomeBusca, 50, stdin);
    nomeBusca[strcspn(nomeBusca, "\n")] = '\0'; 

    int encontrado = 0;
    for (int i = 0; i < total; i++) {
        if (strcmp(alunos[i].nome, nomeBusca) == 0) {
            printf("Aluno encontrado!\nNome: %s | Idade: %d\n", alunos[i].nome, alunos[i].idade);
        }
    }
}
