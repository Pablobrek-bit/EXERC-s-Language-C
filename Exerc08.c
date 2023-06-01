#include <stdio.h>
#include <string.h>

int contarRep(char str[], char str2[]) {
    int c = 0;
    int tam_sub = strlen(str2);
    int tam = strlen(str);

    for (int i = 0; i <= tam - tam_sub; i++) {
        int r = 1;

        for (int j = 0; j < tam_sub; j++) {
            if (str[i + j] != str2[j]) {
                r = 0;
                break;
            }
        }

        if (r) {
            c++;
        }
    }

    return c;
}

int main() {
    char str1[100] = "banana";
    char str2[100] = "na";

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int c = contarRep(str1, str2);
    printf("A segunda string ocorre %d vezes dentro da primeira string.\n", c);

}

