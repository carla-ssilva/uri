/** 
 @file produto.c

 @brief Calcula o salário trabalhado baseado nas horas trabalhadas.

 @Author: Carla Santos da Silva
 
 @Date: 18/03/2019

 @bugs: Nenhum encontrado até o momento.


**/


#include <stdio.h>

int main (void) {

int number;
int horas;
double salary;

scanf("%d %d %lf", &number, &horas, &salary);

printf("NUMBER = %d\n", number);
printf("SALARY = U$ %.2lf\n", salary = salary*horas);

return 0;

}