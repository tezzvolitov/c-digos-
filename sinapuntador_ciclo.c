#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>  
int y;  
void func() {   
  int x = 40;   
    y = x;    
    y = 23; 
    }
    int main(void) {   
    clock_t inicio, fin;   
    double tiempo;   
    inicio = clock();   
    for (int i = 0; i < 1000000; i++) {       
      }     fin = clock();     
      printf("El tiempo de ejecución fue: %f" , tiempo);    
      func();
      printf("El valor de y es %d\n", y);      
      return 0; 
      }