#include<stdio.h>

int main(){
	int tempo, vm;
	double litros , distancia;
	
	scanf("%d %d", &tempo, &vm);
    
	distancia = vm * tempo;
    litros = distancia/12;
    
	printf("%.3lf\n", litros);
    return 0;
}

