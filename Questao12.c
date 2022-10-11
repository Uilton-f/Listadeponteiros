//Ponteiro para função

#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y){
  return x + y;
}

int main(){
  int a, b, c;
  int (*p)(int,int);

  printf("Digite dois números: \n");
  scanf("%d  %d", &a, &b);

  //Ponteiro recebe o endereço da função
  p = soma;
  c = p(a,b);

  printf("Soma = %d\n", c);
  
  return 0;
}
