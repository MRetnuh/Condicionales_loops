#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    int menor = atoi(argv[1]);
    int suma = 0;
    for (int i = 2; i < argc; i++) {
           int numero = atoi(argv[i]);
           suma += numero;
        if (numero <  menor) {
            menor = numero;

        }
    }

double promedio = suma / argc;
    printf("El menor número ingresado es: %d\n", menor);
printf("El promedio es: %.2f\n", promedio);
    return 0;
}
