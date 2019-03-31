#include <stdio.h>

int main (void) {


int codigo;
int quantidade;
double cachorroQuente = 4.00;
double Xsalada = 4.50;
double Xbacon = 5.00;
double torrada = 2.00;
double refri = 1.50;

scanf("%d %d", &codigo, &quantidade);

if (codigo == 1) {

cachorroQuente = (quantidade * cachorroQuente);

printf("Total: R$ %.2lf\n", cachorroQuente);

}

if(codigo == 2) {

Xsalada = (quantidade * Xsalada);

printf("Total: R$ %.2lf\n", Xsalada);

}

if (codigo == 3) {

Xbacon = (quantidade * Xbacon);

printf("Total: R$ %.2lf\n", Xbacon);

}

if (codigo == 4) {

torrada = (quantidade * torrada);

printf("Total: R$ %.2lf\n", torrada);

}

if (codigo == 5) {

refri = (quantidade * refri);

printf("Total: R$ %.2lf\n", refri);


}
return 0;
}