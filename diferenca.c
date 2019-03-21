/** 
 @file produto.c

 @brief Calcula a diferença entre a resultado do produto de A*B e C*D.

 @Author: Carla Santos da Silva
 
 @Date: 18/03/2019

 @bugs: Nenhum encontrado até o momento.


**/

#include <stdio.h>

int main (void) {

int A;
int B;
int C;
int D;
int DIFERENCA;

scanf("%d", &A);
scanf("%d", &B);
scanf("%d", &C);
scanf("%d", &D);

DIFERENCA = (A*B) - (C*D);

printf("DIFERENCA = %d\n", DIFERENCA);

return 0;

}