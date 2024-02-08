#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  double peso = atoi(argv[1]);
  double altura = atoi(argv[2]);
double calculo = peso / (altura * altura);

if(calculo < 18.5){
  printf("pesa poco\n");
}
if(calculo > 22.5){
  printf("pesa mucho\n");
}
if(calculo > 18.5 && calculo < 22.5){
  printf("su peso esta bien\n");
}
return 0;
}
