#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
 int DV = 0;
  while(a != 0){
    int UD = a % 10;
    DV = DV * 10 + UD;
    a /=10;
  }
  if(b == DV){
    printf("es capicua\n");
  }
  else{
    printf("no es\n");
  }
  return 0;
}
