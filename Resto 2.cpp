#include<stdio.h>

int main(){
	int n, i, p = 0;
	int vetor[p];
	scanf("%d", &n);
	
	for(i = 1; i <= 10000; i++){
		if( i % n == 2){
			vetor[p] = i;
			printf("%d\n", vetor[p]);
			p++;
		}
	}
	return 0;
}
	
