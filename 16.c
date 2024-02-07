#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){
    int n = atoi(argv[1]);
    for(int i = 0; i < n; i++){
for(int j = 0; j < n; j++){
    int cond = (i + j) % 2 == 0;
    printf("%c ", cond? '*' : ' ');
}
printf("\n");

}
return 0;
}
