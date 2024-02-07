#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool iguales(int a, int b, int c){
  if (a == b && b == c) return true;
  else                   return false;
}

int main(int argc, char *argv[]){
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);

printf("%s\n", iguales(a, b, c)? "iguales" : "desiguales");
return 0;
}
