/** 
 @file produto.c

 @brief ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, 
 o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

 @Author: Carla Santos da Silva
 
 @Date: 18/03/2019

 @bugs: Nenhum encontrado até o momento.


**/
#include <stdio.h>

int main (void) {

int cod1;
int cod2;
int num1;
int num2;
double valor1;
double valor2;
double valor;

scanf("%d %d %lf", &cod1, &num1, &valor1);
scanf("%d %d %lf", &cod2, &num2, &valor2);

printf("VALOR A PAGAR: R$ %.2lf\n", valor = (num1*valor1) + (num2*valor2));

return 0;

}