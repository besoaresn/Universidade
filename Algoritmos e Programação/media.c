#include <stdio.h>
//definicao das constantes
#define pesoA 3.5
#define pesoB 7.5

//declaracao da funcao
void media(double a, double b);
//funcao principal
int main ()
{
  double a,b;

  scanf("%lf", &a);
  scanf("%lf", &b);

  //chamada da funcao
  media(a, b);
}
//funcao do resultado
void media(double a, double b)
{
  printf("MEDIA = %.5lf\n", ( (a  *  pesoA) + (b * pesoB) ) / 11 ); 
}