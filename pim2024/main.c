#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definindo a estrutura para armazenar os dados do usuário
struct Usuario {
    char nome[50];
    int idade;
    char email[50];
};

int main() {
    // Definindo uma variável do tipo Usuario para armazenar os dados
    struct Usuario usuario;

    // Solicitando e lendo os dados do usuário
    printf("Digite o nome do usuário: ");
    fgets(usuario.nome, 50, stdin);
    printf("Digite a idade do usuário: ");
    scanf("%d", &usuario.idade);
    printf("Digite o email do usuário: ");
    scanf("%s", usuario.email);

    // Limpando o buffer do teclado
    while (getchar() != '\n');

    // Exibindo os dados cadastrados
    printf("\nDados cadastrados:\n");
    printf("Nome: %s", usuario.nome);
    printf("Idade: %d\n", usuario.idade);
    printf("Email: %s\n", usuario.email);

    return 0;
}