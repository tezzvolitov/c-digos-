#include <stdio.h>
#include <math.h>

double areat(double a,double b, double c){
double p =(a + b + c)/2;
double area = sqrt(p *(p-a)*(p-b)*(p-c));
return area;
}
int main() {
     double a,b,c;
     printf("dame los datos para calcular:\n");
     scanf("%lf %lf %lf",&a ,&b, &c);
    
    double area = areat(a,b,c);
    printf("El área es :%2.1f\n",area);
    
    return 0;
    }