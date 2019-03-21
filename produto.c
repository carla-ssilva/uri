/** 
 @file produto.c

 @brief Calcula o produto de dois números.

 @Author: Carla Santos da Silva
 
 @Date: 18/03/2019

 @bugs: Nenhum encontrado até o momento.


**/

#include <stdio.h>

int main (void) {

int A;
int B;
int PROD;

scanf("%d", &A);
scanf("%d", &B);

PROD = A*B;

printf("PROD = %d\n\n", PROD);

return 0;

}