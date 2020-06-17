#include<stdio.h>

int main(){
	int n, i;
	int soma = 0, somac = 0, somas = 0, somar = 0;
	scanf("%d", &n);
	char vetorC[n];
	int vetorN[n];
		
	for(i = 0 ; i <= n; i++){	
		scanf("%d  %c", &vetorN[i], &vetorC[i]);
		
		if(vetorC[i] == 'C'){
			somac = somac + vetorN[i];
		}
		if(vetorC[i] == 'R'){
			somar = somar + vetorN[i];
		}
		if(vetorC[i] == 'S'){
			somas = somas + vetorN[i];
		}	
	}
	
	soma = somac + somar + somas;
	
	printf("Total: %d cobaias\n", soma);
	printf("Total de coelhos: %d\n", somac);
	printf("Total de ratos: %d\n", somar);
	printf("Total de sapos: %d\n", somas);
	printf("Percentual de coelhos: %.2f %%\n", (float)(somac*100.0)/soma);
	printf("Percentual de ratos: %.2f %%\n", (float)((somar*100.0)/soma));
	printf("Percentual de sapos: %.2f %%\n", (float)(somas*100.0)/soma);
	
	return 0;
}
