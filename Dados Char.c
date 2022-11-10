    #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");

    char str[]="Oi";
    printf("\n Valor atual: %s", str); //Retorna o Valor da String

    printf("\n Maiuscula: %s", strupr(str)); // Retorna o valor da String tudo maiusuculo
    printf("\n Minuscula: %s", strlwr(str)); // Retorna o valor da String tudo minuscula

    printf(" \n Tamanho: %i", strlen(str)); // Retorna qual o tamanho da string, ou no caso, quantas letras tem

    printf("\n Substituir Valores: %s", strcpy(str,"Teste 2")); //Troca o valor da variavel. Deixou de ser oi para ser teste 2

    printf("\n Comparar : %i \n 0 para igual e qualquer outro numero diferente", strcmp("Teste 2",str)); // Compara se a String tem o valor que se espera (valor esperado, valor da variavel)

    printf(" \n Substituir valores colocando posicao: %s", strncpy(str,"ROLFI", 2)); //Troca o valor da variavel mas com um limite(variavel, palavra que substitui, quantidade de caracteres que substitui)

    strcpy(str,"teste");
    printf("\n Concatenar : %s", strcat(str," 845"));// Concaterna as strings, ao inves de soma-las, voce as junta para virar uma so

    return 0;
}