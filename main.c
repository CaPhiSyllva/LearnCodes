#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	//aceitar acentuação no prompt
	setlocale(LC_ALL, "Portuguese");

/* Declaração e Atribuição de valores */

int num=10; double numf = 25.4; char letra='a';

//O uso de * mostra que a variavel é um ponteiro

int *pnum; double *pnumf; char *pletra;

/*Pegando o endereço das variáveis*/
pnum =&num; pnumf=&numf; pletra= &pletra;

printf("---------------------------------:pnum - pnumf- pletra");
printf("\n Valores das Variáveis: %d -%f - %c", num,numf,letra);
printf("\n Valores dos Ponteiros: %d - %f - %c",*pnum, *pnumf,*pletra);
printf("\n Endereços dos Ponteiros: %p - %p - %p", pnum,pnumf,pletra);

/*Mudando valores dos ponteiros*/

*pnum=5;

//%p imprime o ENDEREÇO do ponteiro ou variável
printf("\n Valores de NUM: %d", num);
printf("\n Valores pnum: %D", *pnum);
printf("\n Endereço PNUM: %d", pnum);

getchar();

return 0;

}
