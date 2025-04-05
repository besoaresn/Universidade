#include <stdio.h>

#define ANO 365
#define MES 30

int main()
{
  int idade, ano, mes, dias;

  scanf("%i", &idade);

  ano = idade / ANO;
  mes = ((idade % ANO) / MES);
  dias = ((idade % ANO) % MES);
  printf("%i ano (s)\n%i mes (es)\n%i dia (s)\n", ano, mes, dias);

  return 0;
}