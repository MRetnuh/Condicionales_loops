#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  while(b > a){
    a++;
    if(a % 3 == 0){
      printf("%d\n", a);
    }
  }
  return 0;
}
