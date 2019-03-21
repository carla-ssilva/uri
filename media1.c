/** 
 @file media1.c

 @brief Calcula a média ponderada de duas notas de um aluno.

 @Author: Carla Santos da Silva
 
 @Date: 18/03/2019

 @bugs: Nenhum encontrado até o momento.


**/

#include <stdio.h>

int main (void) {

double A;
double B;
double MEDIA;

scanf("%lf", &A);
scanf("%lf", &B);

printf("MEDIA = %.5lf\n", MEDIA = (A*3.5 + B*7.5) / 11);

return 0;

}