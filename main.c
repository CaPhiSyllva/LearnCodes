#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	//aceitar acentua��o no prompt
	setlocale(LC_ALL, "Portuguese");

/* Declara��o e Atribui��o de valores */

int num=10; double numf = 25.4; char letra='a';

//O uso de * mostra que a variavel � um ponteiro

int *pnum; double *pnumf; char *pletra;

/*Pegando o endere�o das vari�veis*/
pnum =&num; pnumf=&numf; pletra= &pletra;

printf("---------------------------------:pnum - pnumf- pletra");
printf("\n Valores das Vari�veis: %d -%f - %c", num,numf,letra);
printf("\n Valores dos Ponteiros: %d - %f - %c",*pnum, *pnumf,*pletra);
printf("\n Endere�os dos Ponteiros: %p - %p - %p", pnum,pnumf,pletra);

/*Mudando valores dos ponteiros*/

*pnum=5;

//%p imprime o ENDERE�O do ponteiro ou vari�vel
printf("\n Valores de NUM: %d", num);
printf("\n Valores pnum: %D", *pnum);
printf("\n Endere�o PNUM: %d", pnum);

getchar();

return 0;

}
