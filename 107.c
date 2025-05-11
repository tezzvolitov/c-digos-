#include <stdio.h>
#include <string.h>

int factorial(int N){
if (N <= 1)
return 1;
return N* factorial(N-1);
}

int main(){
int N;
printf("cual es el dato:");
scanf("%d",&N);
printf("el factor de %d es: %d\n",N,factorial(N));
return 0;
}