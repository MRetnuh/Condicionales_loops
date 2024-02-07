#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  if(a > b)
    printf("el cociente es %d\n", a / b);
  else
    printf("no se puede dividir\n");
  return 0;
}
