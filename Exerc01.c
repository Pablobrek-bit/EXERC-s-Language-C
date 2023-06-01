#include <stdio.h>

int main(){
    char nome[50];
    printf("Fale o seu nome: ");
    scanf("%49[^\n]s", nome);

    printf("Seu nome e: %s", nome);
}