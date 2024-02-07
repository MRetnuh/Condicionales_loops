#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  if(x >= 1 && y >= 1)
    printf("cuadrante I\n");
  else if(x <= 0 && y >= 1){
    printf("cuadrante II\n");
  }
  else if  (x <= 0 && y <= 0){
    printf("cuadrante III\n");
  }
 else {
   printf("cuadrante IV\n");
 }
  return 0;
}
