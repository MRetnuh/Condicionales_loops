#include <stdio.h>

void factorizar(int num) {
    int divisor = 2;

    printf("Factores primos de %d: ", num);

    while (num > 1) {
        if (num % divisor == 0) {
            printf("%d ", divisor);
            num /= divisor;
        } else {
            divisor++;
        }
    }

    printf("\n");
}

int main(int argc, char *argv[]) {
    int num =  atoi(argv[1]);

    factorizar(num);

    return 0;
}
