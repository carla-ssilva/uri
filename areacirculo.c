/** 
 @file areacirculo.c

 @brief Calcula á area do circulo.

 @Author: Carla Santos da Silva
 
 @Date: 18/03/2019

 @bugs: Nenhum encontrado até o momento.


**/

#include <stdio.h>
#include <math.h>

int main (void) {

double raio;
double area;
double pi =  3.14159;

scanf("%lf", &raio); 

printf("A=%.4lf\n", (pi * (raio*raio)));

return 0;

}

 