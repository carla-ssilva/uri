#include <stdio.h>
#include <math.h>

int main (void) {

double A, B, C, delta, x1, x2;

scanf("%lf %lf %lf", &A, &B, &C);

delta = B*B - 4 *A*C;
x1 = (-B + sqrt(delta)) / (2*A);
x2 = (-B - sqrt(delta)) / (2*A);

if (delta <= 0 || A == 0) {

printf("Impossivel calcular\n");

}

 else  {


printf("R1 = %.5lf\n", x1);
printf("R2 = %.5lf\n", x2)	;
 

}

return 0;

}