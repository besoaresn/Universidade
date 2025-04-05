#include <stdio.h>

#define A 2
#define B 3
#define C 5

double calculoMedia(double a, double b, double c);


int main(void){
    double a, b, c, media;

    scanf("%lf %lf %lf", &a, &b, &c);

    media = calculoMedia(a , b , c);
    printf("MEDIA = %.1lf\n", media);
}

double calculoMedia(double a, double b, double c) {
    double media;
    media = ((a * A) + (b * B) + (c * C))/ 10;
    return (media);
}