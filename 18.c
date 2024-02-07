#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char *argv[]){
printf("n\tn*n\tlog n\n");
double i = 1;
while(i < 128){
  printf("%.2f\t%.2f\t%.2f\n", i, i*i, log(i));
i*=2;
}
return 0;
}
