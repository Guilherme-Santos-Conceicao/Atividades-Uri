#include<stdio.h>

main(){
  double valor;
  int valorNota, notas, n100, n50, n20, n10, n5, n2, n1;
  int   moedas;
  int  valorMoeda;
  int  m50, m25, m10, m5, m1;
  
  scanf("%lf", &valor);
  notas = (int)valor;
  moedas = (valor - ((int)valor))*100;
  
  // Notas 
  n100 = notas / 100;
  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", n100);
  valorNota = notas % 100;
  
  n50 = valorNota / 50;
  printf("%d nota(s) de R$ 50.00\n", n50);
  valorNota = valorNota % 50;
  
  n20 = valorNota / 20;
  printf("%d nota(s) de R$ 20.00\n", n20);
  valorNota = valorNota % 20;
  
  n10 = valorNota / 10;
  printf("%d nota(s) de R$ 10.00\n", n10);
  valorNota = valorNota % 10;
  
  n5 = valorNota / 5;
  printf("%d nota(s) de R$ 5.00\n", n5);
  valorNota = valorNota % 5;
  
  n2 = valorNota / 2;
  printf("%d nota(s) de R$ 2.00\n", n2);
  valorNota = valorNota % 2;
  
  // Moedas
  n1 = valorNota;
  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", n1);
  
  m50 =  (moedas / 50);
  printf("%d moeda(s) de R$ 0.50\n", m50 );
  valorMoeda =  moedas % 50;
  
  m25 = (valorMoeda / 25);
  printf("%d moeda(s) de R$ 0.25\n", m25);
  valorMoeda = moedas % 25;
  
  m10 = (valorMoeda / 10);
  printf("%d moeda(s) de R$ 0.10\n", m10);
  valorMoeda = valorMoeda % 10;
  
  m5 = (valorMoeda / 5);
  printf("%d moeda(s) de R$ 0.05\n", m5);
  valorMoeda = valorMoeda % 5;
  
  m1 = valorMoeda ;
  printf("%d moeda(s) de R$ 0.01\n", m1);
  return 0;
} 
