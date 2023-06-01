#include <stdio.h>
#include <string.h>

int main(){
    char nome[50], letra;
    int v = 0;
    printf("Fale o seu nome: ");
    scanf("%49[^\n]s", nome);
    fflush(stdin);

    printf("Escreva uma letra: ");
    scanf("%c", &letra);
    for(int i = 0; i < strlen(nome); i++){
        if(nome[i] == ('a') ||nome[i] == ('e') ||nome[i] == ('i') ||nome[i] == ('o') ||nome[i] == ('u') ||nome[i] == ('A') ||nome[i] == ('E') ||nome[i] == ('I') ||nome[i] == ('O') ||nome[i] == ('U')){
            v++;
            nome[i] = letra;
        }
    }
    printf("Seu novo nome foi: %s\nSeu novo tem %d vogais", nome, v);
}