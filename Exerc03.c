#include <stdio.h>

int main(){
    char nome[50], tam = 0;
    printf("Fale o seu nome: ");
    scanf("%49[^\n]s", nome);

    for(int i = 0; nome[i] != '\0'; i++){
        tam++;
    }
    printf("O tamanho da sua String foi: %d", tam);
}