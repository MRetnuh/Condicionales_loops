#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  int i = 1;
  int r = 1;
  while(i <= n){
  r*= i;
  i++;
  }
  printf("%d\n", r);;
  return 0;
}
