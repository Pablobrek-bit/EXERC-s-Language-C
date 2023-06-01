//Aluno: Pablo Henrique da Silva Andrade
//Matricula: 555989


#include <stdio.h>
#include <string.h>

#define n 50

int main() {
    char palavra[n];
    int i,j,tam, res;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    
    tam = strlen(palavra);

    
    res = 1;
    
    for (i = 0, j = tam - 1; i < j; i++, j--) {
        if (palavra[i] != palavra[j]) {
            res = 0;
            break;
        }
    }
    

    // Imprime o resultado
    if (res) {
        printf("%s e um palindromo.\n", palavra);
    } else {
        printf("%s nao e um palindromo.\n", palavra);
    }
}
