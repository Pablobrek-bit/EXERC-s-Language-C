#include <stdio.h>

#define n 100

int main() {
    char str[n];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("String convertida para letras maiusculas: %s\n", str);

}
