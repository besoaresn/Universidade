#include <stdio.h>
#include <math.h>
#define pi 3.14159

//Funções Definidas
double calcF(double R);
void printResult(double resultado);

//Função Principal
int main(void){

  //declarando variaveis e entradada de dados
  double R, resultado;
  scanf("%lf", &R);

//Chamando as funçoes
  resultado = calcF(R);
  printResult(resultado);
}

//Função calculo
double calcF(double R){
  return (4.0 / 3) * pi * pow(R,3);
}

//Função Print
void printResult(double resultado){
  printf("%.3lf\n", resultado);
}