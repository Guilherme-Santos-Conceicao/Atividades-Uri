#include<stdio.h>

int main(){
	int maior, soma = 0, menor, aux1, aux2, i, p = 0;
	int impar[p];
	scanf("%d %d", &maior, &menor);
	
	if( menor > maior){
		aux1 = menor;
		aux2 = maior;
	}
	
	if(maior > menor){
		aux1 = maior;
		aux2 = menor;
	}
	
	for(i = (aux2+1); i < aux1; i++){
		if(i % 2 != 0){
			impar[p] = i;
			soma = impar[p] + soma;
			p++;
		}
	}
	
	printf("%d\n", soma);
	return 0;
}
