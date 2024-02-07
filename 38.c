#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
char l = 'a';
  int letra = 0;
printf("a");
  while(letra <= 24){
    letra++;
      l++;
      printf(" %c", l);
      if(letra == 13){
        printf(" ñ");
      }
  }
 printf("\n");
  return 0;
}
