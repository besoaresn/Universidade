#include <stdio.h>

int calculoHrs(int N, int hrs);
int calculoSobra(int N, int sobra); 
int calculoMin(int min, int sobra);
int calculoSeg(int seg, int sobra);

int main(){
  int N, hrs, min, seg, sobra;

  scanf("%i", &N);

  hrs = calculoHrs(N, hrs);
  sobra = calculoSobra(N, sobra);
  min = calculoMin(min, sobra);
  seg = calculoSeg(seg, sobra);
  
  printf("%i:%i:%i\n", hrs, min, seg);
}

int calculoHrs(int N, int hrs){
  return N / 3600;
}
int calculoSobra(int N, int sobra){
  return N % 3600;
}
int calculoMin(int min, int sobra){
  return sobra / 60;
}
int calculoSeg(int seg, int sobra){
  return sobra % 60;
}