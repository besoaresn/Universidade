#include <stdio.h>
#define CONSUMO 12.0

float calcFinal(int horas, int velocidade);
void printResults(double resultado);

int main()
{
	int horas, velocidade;
	float resultado;

	scanf("%i", &horas);
	scanf("%i", &velocidade);

	resultado = calcFinal(horas, velocidade);
	printResults(resultado);
	
}

float calcFinal(int horas, int velocidade){
	return ((horas * velocidade) / CONSUMO);
}

void printResults(double resultado){
	printf("%.3lf", resultado);
}