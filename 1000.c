#include <stdio.h>


int i[10],x;
float f[10];

int main() {
printf ("\t\tEntero\t\tflotante\n\n");
for (x=0; x<10; x++){
printf("elemento %d:\t%d\t\t%d\n", x, &i[x], &f[x]);
}
return 0;
}
  