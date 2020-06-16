#include<stdio.h>

/* ----------ESSE ESTÁ ERRADO----------- */

int main(){
	int n, j, i = 0;
	int p = 1;
	float porc, pors,  porr;
	int soma = 0, somac = 0, somas = 0, somar = 0;
	char c = 'C', s = 'S', r ='R';
	scanf("%d", &n);
	char matriz[n][2];
	int matrizN[n][2];
		
	while(i < 3){
		i++;
		for(j = 0 ; j < 3 ; j++){
			
			scanf("%d  %c",&matrizN[i][j], &matriz[i][j]);
		
			if(matriz[i][j] == c){
				somac = somac + matrizN[i][j];
			}
			if(matriz[i][j] == s){
				somas = somas + matrizN[i][j];
			}
			if(matriz[i][j]== r){
				somar = somar + matrizN[i][j];
			}	
		}
	}
	
	soma = somac + somar + somas;
	porc = (somac * soma)/ 100.00;
	pors = (somas * soma)/100.00;
	porr = (somar * soma)/ 100.00;
	
	printf("\nTotal: %d cobaias\n", soma);
	printf("Total de coelhos: %d\n", somac);
	printf("Total de ratos: %d\n", somar);
	printf("Total de sapos: %d\n", somas);
	printf("Total de sapos: %d\n", somas);
	printf("Percentual de coelhos: %.2f%%\n", porc);
	printf("Percentual de ratos: %.2f%%\n", porr);
	printf("Percentual de sapos: %.2f%%\n", pors);

	return 0;
}
