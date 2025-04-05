#include <stdio.h>

float calculo(int n1, int n2, float v1, float v2);

int main()
{

    int p1, p2, n1, n2;
    float v1, v2, vF;

    scanf("%i %i %f", &p1, &n1, &v1);
    fflush(stdin);
    scanf("%i %i %f", &p2, &n2, &v2);

    vF = calculo(n1, n2, v1, v2);

  printf("VALOR A PAGAR: R$ %.2f\n", vF);

}
float calculo(int n1, int n2, float v1, float v2) {
    return (n1 * v1) + (n2 * v2);
}