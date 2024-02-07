#include<stdio.h>
#include<stdlib.h>

int factorial (int n){
  int r = 2 ;
int i = 1;
while(i <= n){
  r *= i;
  i++;
}
return r;
}

int main(int argc, char *argv[]){
int a = atoi(argv[1]);
if(a < 0){
  puts("Error\n");
  return 1;
}
printf("factorial de %d = %d\n", a, (factorial(a));
return 0;

}

}
