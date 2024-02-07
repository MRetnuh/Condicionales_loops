#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

double b = 0;

bool play() {
return rand() % 2 == 0? false : true;
}
bool experimento(int s, int g) {
  while (s > 0 && s < g){
    if(play()) s++;
    else       s--;
b++;
  }
  return s == 0? false : true;
}
  int main(int argc, char *argv[]){
srand:(time(NULL));
int s = atoi(argv[1]);
int g = atoi(argv[2]);
int t = atoi(argv[3]);
double v = 0.0;
for(int i = 0; i < t; i++){
  if(experimento(s, g)) v++;
}

printf("Gane el %.2f de las veces\n", v/t *100);
printf("Promedio de las apuestas: %.2f\n", b/t);
return 0;
  }
