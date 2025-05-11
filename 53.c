#include <stdio.h>  

int main (){
int mas[100];
int i = 0;
while(i <100){
mas[i]= 2 * (i+1);
i++;
}

i=0;
while (i<100){
printf("2 * %d = %d\n", i+1, mas[i]);
i++;
}



    
return 0;
    }    