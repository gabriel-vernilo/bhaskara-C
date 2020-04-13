#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void main(){
float a,b,c,delta,x1,x2;

    printf("Valor de A: ");
    scanf("%f", &a);
    printf("\nValor de B: ");
    scanf("%f", &b);
    printf("\nValor de C: ");
    scanf("%f", &c);

    delta = (b*b)-(4*a*c);
    printf("\ndelta = %f \n",delta);
    x1 = ((b*-1) + (pow(delta,0.5))) / (2*a);
    x2 = ((b*-1) - (pow(delta,0.5))) / (2*a);
    printf("x1 = %f ; x2 = %f\n", x1,x2);

    system("pause");
    return 0;
}
