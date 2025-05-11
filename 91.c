#include <stdio.h>
  int main(){  
  char frace[10];
   int espacio;
   printf("Introduce una palabra \n");
   scanf("%s", frace);
   
   espacio = strlen(frace);
   
   for(int i=0; i < espacio; i++){
   for(int j=0; j < espacio; j++){
   printf("n");
   }
   printf("\n");
   }
   
 return 0;
 }