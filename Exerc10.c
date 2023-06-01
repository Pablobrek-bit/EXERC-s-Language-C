#include <stdio.h>
#include <string.h>
#define n 50


int main(){
    char str1[n], str2[n];
    printf("Fale a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Fale a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    
    if(strlen(str1) < strlen(str2)){
        printf("A maior string foi o %s \n", str2);
    } else if(strlen(str1) > strlen(str2)){
        printf("A maior string foi o %s \n", str1);
    } else {
        printf("As duas strings sao iguais\n");
    }

    int ord = strcmp(str1, str2);

    if (ord < 0) {
        printf("A primeira string vem antes da segunda na ordem ortografica.\n");
    } else if (ord > 0) {
        printf("A primeira string vem depois da segunda na ordem ortografica.\n");
    } else {
        printf("As duas strings sao iguais na ordem ortografica.\n");
    }
}