#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
int n = atoi(argv[1]);
    for(int i = 1; i <= n; i++){
for(int j = 1; j <= n; j++){
    printf("%d x %d = %d\n", i, j, i * j);
    printf("%d + %d = %d\n", i, j, i + j);
}
printf("\n");
   }
      return 0;
}
