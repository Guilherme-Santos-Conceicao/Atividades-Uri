#include<stdio.h>

int main(){
	float cont = 0, soma = 0.0;
	float vetor[6], media;
	int i;
	scanf("%f %f %f %f %f %f", &vetor[0], &vetor[1], &vetor[2], &vetor[3], &vetor[4], &vetor[5]);
			
	for(i = 0; i < 6; i++){
		if(vetor[i] > 0){
			cont++;
			soma = soma + vetor[i];
		}
	}
	
	media = soma / cont;
	printf("%.0f valores positivos\n", cont);
	printf("%.1f\n", media);
	
	return 0;
}
