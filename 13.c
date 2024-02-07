#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
int n = atoi(argv[1]);
int i = 2;
int primo = 0;
while(i < n) {
i++;
  if (n % i != 0){
    primo = 1;
  }
printf("%s\n", primo? "es primo" : "no es primo");
  return 0;
}
}
