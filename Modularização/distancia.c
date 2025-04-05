#include <stdio.h>
#include <math.h>

float calcF(float x1, float y1, float x2, float y2);
void printResult(float result);

int main(void){
  float x1, y1, x2, y2, result;

  scanf("%f %f", &x1, &y1);
  scanf("%f %f", &x2, &y2);

  result = calcF(x1, y1, x2, y2);
  printResult(result);
}

float calcF(float x1, float y1, float x2, float y2){
  return sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
}
void printResult(float result){
  printf("%.4lf\n", result);
}
