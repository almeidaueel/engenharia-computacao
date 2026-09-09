#include <stdio.h>
#include <locale.h>


int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int n, fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &n);

    do {
        printf("Digite um número inteiro positivo.\n");
        printf("Digite um número: ");
        scanf("%d", &n);
    } while (n < 0);

    for (int i = 1; i <= n; i++) {
        fatorial = fatorial*i;
    }

    printf("O fatorial de %d é: %d\n", n, fatorial);
    return 0;
}
