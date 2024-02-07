#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
  int b = 1;
while(b <= n/2){
  b *= 2;
}
while(b > 0){
  if(n >= b){
  printf("1");
  n -= b;
  }
  else{
    printf("0");
}
    b /=  2;
}
  printf("\n");
  return 0;
}
