/** 
 @file produto.c

 @brief Calcula o salário do funcionário com um bonus de 15%.

 @Author: Carla Santos da Silva
 
 @Date: 18/03/2019

 @bugs: Nenhum encontrado até o momento.


**/
#include <stdio.h>

int main (void) {

char nome[61];
double salario;
double vendas;

scanf ("%s", nome);
scanf ("%lf %lf", &salario, &vendas);

printf("TOTAL = R$ %.2lf\n", salario + vendas * 0.15);

return 0;

}