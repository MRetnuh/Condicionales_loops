#include<stdio.h>
#include<stdlib.h>

void tabla(int n){
int j = 0;
  for(int i= 0; i < n; i++){
     for(int j = 0;j < n; j++)

      printf("%d ", i == j? 1 : 0);
    printf("%d\n", i - (j / 2));
  }

}
int main(int argc, char *argv[]){
  int a = atoi(argv[1]);
  tabla(a);
  return 0;
}
