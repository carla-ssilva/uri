/** 
 @file produto.c

 @brief Calcula o volume de uma esfera.

 @Author: Carla Santos da Silva
 
 @Date: 18/03/2019

 @bugs: Nenhum encontrado até o momento.


**/
#include <stdio.h>

int main (void) {

double raio;
double pi = 3.14159;
double volume;

scanf("%lf", &raio);

printf("VOLUME = %.3lf\n", volume = (4/3.0) * pi * (raio*raio*raio));

return 0;

}