#include <stdio.h>
  int main(){
int len;
char origen[100], destino[100], resultado[100]="";
int N;

printf("ingresa la primera palabra\n");
 
scanf("%s", origen);
 
printf("ingresa la segunda palabra\n");

scanf("%s", destino);

N = strlen(origen);

strcat(resultado, origen);
  for(int i =0; i<N; i++){
      strcat(resultado,destino);
  }
printf("resultado %s", resultado);

return 0;
}