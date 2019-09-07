#include <stdio.h>
#include <math.h>

int main(void) {
  float a, b, c, s=0, area, calculo;
  printf("Digite os lados do triangulo\n");
  scanf("%f, %f, %f", &a, &b, &c);
  if (a!=b && a!=c && c!=b){
    printf("O triangulo eh escaleno\n");
  }
  else if (a==b && a==c){
    printf("O triangulo eh equilatero\n");
  }
  else if ((a==b && c!=b) || (b==c && a!=c) || (a==c && b!=a)){
    printf("O triangulo eh isosceles\n");
  }
  s=(a+b+c)/2;
  calculo=(s*((s-a)*(s-b)*(s-c)));
  area=sqrt(calculo);
  printf("a area do triangulo eh %.2f", area);
  return 0;
}
