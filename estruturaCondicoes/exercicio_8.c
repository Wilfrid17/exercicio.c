#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

int main(){
    //funçoes matematico
    float x,y,z,a,b,c,d;


    x = 2.0;
    y = 3.0;
    z = -7.0;

    a = pow(x , y);
    b = sqrt(y);
    c = PI;
    d = fabs(z);


    printf("Resultado pow: %f\n" ,a);
    printf("Resultado sqrt: %f\n: ",b);
    printf("Resultado PI: %f\n",c);
    printf("Resultado ABS: %f\n: ",d);
}