#include <stdio.h>
#include <string.h>

int main(){
    char nome[50], invertido[50];
    printf("Fale o seu nome: ");
    scanf("%49[^\n]s", nome);
    strcpy(invertido, nome);
    int c = strlen(nome);

    for(int i = 0; i < c; i++){
        for(int j = c; j >= 0; j--){
            nome[i] = invertido[c - i - 1];
        }
    }
    printf("Seu nome invertido foi: %s", nome);
}
