#include <stdio.h>
#include <math.h>
#define PI 3.14159

double calcTri(double A, double C);
double calcCirc(double A, double C);
double calcTrapez(double A, double B, double C);
double calcQuad(double B);
double calcRet(double A, double B);
void printResults(double TRIANGULO, double CIRCULO, double TRAPEZIO, double QUADRADO, double RETANGULO);


int main(){
  double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;

  scanf("%lf %lf %lf", &A, &B, &C);

  TRIANGULO = calcTri(A, C);
  CIRCULO = calcCirc(A, C);
  TRAPEZIO = calcTrapez(A, B, C);
  QUADRADO = calcQuad(B);
  RETANGULO = calcRet(A, B);
  printResults(TRIANGULO,CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);

  return 0;
}
double calcTri(double A, double C) {
  return  (A * C) / 2;
}

double calcCirc(double A, double C) {
  return  PI * pow(C,  2);
}