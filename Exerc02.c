#include <stdio.h>

int main(){
    char nome[50];
    printf("Fale o seu nome: ");
    scanf("%49[^\n]s", nome);

    for(int i = 0;i<4;i++){
        printf("%c ", nome[i]);
    }
}