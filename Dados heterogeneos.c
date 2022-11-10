#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <locale.h>

struct pessoa
{
    char nome[50];
    char email[50];
};
int main (void)
{
    struct pessoa p1;
    printf("\n=== Cadastro de Usuario ===\n");

    printf("Nome: ");
    scanf("%s%c", &p1.nome);

    printf("Email: ");
    fflush(stdin); // para ler o teclado
    fgets(p1.email,80,stdin); //para atribuir o valor na string

     printf("\n=== imprimindo ===\n");
     printf("\n Nome: ");
     puts(p1.nome); // tambem pode ser usado para imprimir a string
     printf("\n Email: %s", p1.email);

     getch();
     return 0;
}
    
