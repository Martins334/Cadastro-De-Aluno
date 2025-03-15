#include <stdio.h>
#include "aluno.h"

int main() {
    Aluno alunos[MAX_ALUNOS]; 
    int totalAlunos = 0;      
    int opcao;

    do {
        printf("\n----- MENU -----\n");
        printf("1. Cadastrar Aluno\n");
        printf("2. Listar Alunos\n");
        printf("3. Buscar Aluno\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                cadastrarAluno(alunos, &totalAlunos);
                break;
            case 2:
                listarAlunos(alunos, totalAlunos);
                break;
            case 3:
                buscarAluno(alunos, totalAlunos);
                break;
            case 4:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
