#include <stdio.h>
#include <math.h>

int main(void){
int x,y;
int max;
x= 2;
y= 3;

max = potencia (x,y);
printf("La potencia es: %d ",max);
return O;
}

int potencia(int a,int b){
if(b < 1)
return 1;
return a *potencia(a,b-1);
}