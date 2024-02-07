#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char *argv[]){
  int n = atoi(argv[1]);
double sum = 0.0;
  for(int i = 1; i <= n; i++){
sum += 1.0 / (i*i);
  }
sum *= 6;
sum = sqrt(sum);
printf("la suma de pi aproximado por la serie es %f\n", sum);
return 0;
}
