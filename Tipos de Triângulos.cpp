#include<stdio.h>
#include<math.h>

int main(){
	double A, B, C, valorA, valorB, valorC;
	scanf("%lf %lf %lf", &A, &B, &C);
	// torna A maior
	
	valorA = A;
	valorB = B;
	valorC = C;
	if(A < B ){
		valorA = B;
		valorB = A;
	}
	if(valorA < C){
		valorA = C;
		valorC = B;
	}
	
	// Calculos do triagulos 

	if(valorA >= valorB + valorC){
		printf("NAO FORMA TRIANGULO\n");
	}else{
	
		if(pow(valorA,2) == pow(valorB,2) + pow(valorC,2)){
			printf("TRIANGULO RETANGULO\n");     
		}
		
		if(pow(valorA,2) > pow(valorB, 2) + pow(valorC,2)){
			printf("TRIANGULO OBTUSANGULO\n");
		}
		
		if(pow(valorA,2) < pow(valorB,2) + pow(valorC,2)){
			printf("TRIANGULO ACUTANGULO\n");
		}
		
		if(valorA == valorB && valorA == valorC){
			printf("TRIANGULO EQUILATERO\n");
		}
		
		if(valorA == valorB && valorA != valorC || valorA == valorC && valorA != valorB || valorB == valorC && valorB != valorA){
			printf("TRIANGULO ISOSCELES\n");
		}
	}
	return 0;
}
