/** 
 @file produto.c

 @brief Calcula o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).

 @Author: Carla Santos da Silva
 
 @Date: 18/03/2019

 @bugs: Nenhum encontrado até o momento.


**/
#include <stdio.h>

int main (void) {

int X;
double Y;
double total;

scanf("%d %lf", &X, &Y);

printf("%.3lf km/l\n", total = X / Y);

return 0;

}