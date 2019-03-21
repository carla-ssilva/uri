/** 
 @file produto.c

 @brief Basecamente calcula a área  do triângulo, circulo, trapézio, quadrado e retângulo guardados nas variáveis A, B e C.

 @Author: Carla Santos da Silva
 
 @Date: 18/03/2019

 @bugs: Nenhum encontrado até o momento.


**/
#include <stdio.h>

int main (void) {

double A, B, C, triangulo, circulo, trapezio, quadrado, retangulo;
double pi = 3.14159;

scanf("%lf %lf %lf", &A, &B, &C);

printf("TRIANGULO: %.3lf\n", triangulo = A * C / 2);
printf("CIRCULO: %.3lf\n", circulo = pi *(C*C));
printf("TRAPEZIO: %.3lf\n", trapezio = (A+B) * C / 2);
printf("QUADRADO: %.3lf\n", quadrado = B*B);
printf("RETANGULO: %.3lf\n", retangulo = B*A);

return 0;

}