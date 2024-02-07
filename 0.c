#include<stdio.h>
#include<stdlib.h>
int suma(int n){
int  sumar = 0;
int  cont = 1;
  while(cont <= n){
  sumar += cont;
    cont++;
   }
return sumar;
}

int main(int argc, char*argv[]){
  int n = atoi(argv[1]);
  printf("la suma es %d\n", suma(n));
  return 0;
}
