#include<stdio.h>

int main() {
  double a, b, c;
  double pi = 3.14159;
  double tri, cir, tra, qua, ret;
  
  scanf("%lf %lf %lf", &a, &b, &c);
  
  tri = (a*c)/2;
  cir = pi*(c*c);
  tra = ((a+b)/2.0)*c;
  qua = b*b;
  ret = a*b;
  
  printf("TRIANGULO: %.3lf\n", tri);
  printf("CIRCULO: %.3lf\n", cir);
  printf("TRAPEZIO: %.3lf\n", tra);
  printf("QUADRADO: %.3lf\n", qua);
  printf("RETANGULO: %.3lf\n", ret);
    return 0;
}
