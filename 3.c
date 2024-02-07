#include <stdio.h>

int main() {
    int a, b;
    int cociente = 0;

    printf("Ingrese el primer número (a): ");
    scanf("%d", &a);

    printf("Ingrese el segundo número (b): ");
    scanf("%d", &b);

    // Verificar si la división tiene resto igual a 0
    while (a >= b) {
        a -= b;
        cociente++;
    }

    if (a == 0) {
        printf("El cociente de a y b es: %d\n", cociente);
    } else {
        printf("No se pueden dividir.\n");
    }

    return 0;
}
