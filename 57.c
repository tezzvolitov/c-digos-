#include <stdio.h>
  int main() {   
   int N,suma = 0;
   printf("número chavo");
   scanf("%d", &N);
   for(int i = 1; i <= N; i++){
   suma +=i;
 }
 printf("la suma %d es:  %d\n", N, suma);
 
 return 0;
 }