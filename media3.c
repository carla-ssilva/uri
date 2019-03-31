#include <stdio.h>

int main (void) {

double nota1, nota2, nota3, nota4, media, notaexame, mediafinal;

scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);

media = (nota1*2+nota2*3+nota3*4+nota4*1) / 10;

printf("Media: %.1lf\n", media);

if (media >= 7.0) {

	printf("Aluno aprovado.\n");
}

else if (media < 5.0){

	printf("Aluno reprovado.\n");
}

else if (media >= 5.0 && media <= 6.9) {

	printf("Aluno em exame.\n");
	scanf("%lf", &notaexame);
	printf("Nota do exame: %.1lf\n", notaexame);
	
	mediafinal = (media + notaexame) / 2;

	if (mediafinal >= 5) 

		printf("Aluno aprovado.\n");

	else if (mediafinal <= 4.9) {
		printf("Aluno reprovado.\n");
	}

	printf("Media final: %.1lf\n", mediafinal);

return 0;
}

}