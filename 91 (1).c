#include <stdio.h>
  int main(){
  char progra[10];
  char compu[10];
  char despues[10];
    printf("Introduce una palabra \n");
    scanf("%s",compu);
    printf("Ingresa otra palabra\n");
    scanf("%s",progra);
    
    strcpy(despues, compu);
    strcpy(compu, progra);
    strcpy(progra, despues);
    
    printf("\n %s", compu);
    printf("\n %s", progra);
    
    

return 0;
}