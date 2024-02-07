#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double producto = 1.0;
    int i = 1;
    while   (i < argc && atoi(argv[i]) != 0) {
   i++;
        double argumento = atof(argv[i]);
           producto *= argumento;

    }

    printf("El producto de los argumentos ingresados es: %.2lf\n", producto);

    return 0;
}
