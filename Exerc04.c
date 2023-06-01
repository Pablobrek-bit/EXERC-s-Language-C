#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char nome[50];
    
    printf("Fale o seu nome: ");
    scanf("%49[^\n]s", nome);
    for(int i = strlen(nome); i >= 0; i--){
        printf("%c ", toupper(nome[i]));
    }
}