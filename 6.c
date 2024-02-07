#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  int r = 2;
  int i = 1;
  while(i <= n){
i++;
r*=2;
int elevado = (r/2) * 2;
    printf("2^%d - %d\n", i, elevado);
  }
  return 0;
}
