/** 
 @file soma.c

 @brief Calcula a soma de dois números.

 @Author: Carla Santos da Silva
 
 @Date: 18/03/2019

 @bugs: Nenhum encontrado até o momento.


**/


#include <stdio.h>

int main (void) {

int A;
int B;
int SOMA;

printf("Digite dois números\n");

scanf("%d", &A);
scanf("%d", &B);

SOMA = A+B;

printf("SOMA = %d\n\n", SOMA);

return 0;

}