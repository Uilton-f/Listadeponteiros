#include <stdio.h>

int main(void) {
  char x[4], *pc;
  int xi[4], i, *pi;
  float xf[4], *pf;
  double xd[4], *pd;

  pc = &x;
  pi = &xi;
  pf = &xf;
  pd = &xd;

  //Assim como na questão 9 o espaço reservado na memória para o tipo char é de 1 byte
  for(i = 1; i < 4; i++){
    printf("endereço de x + %d = %X\n", i, x+i);
  }

  printf("\n");

  //Devido à arquitetura da máquina o tipo int ocupa 4 bytes na memória, diferente da questão 9, na qual foi feita a suposição de ocupar apenas 2 bytes
  for(i = 1; i < 4; i++){
    printf("endereço de xi + %d = %X\n", i, xi+i);
  }

  printf("\n");

  //Assim como na questão 9 o espaço reservado na memória para o tipo float é de 4 bytes
  for(i = 1; i < 4; i++){
    printf("endereço de xf + %d = %X\n", i, xf+i);
  }

  printf("\n");

  //Assim como na questão 9 o espaço reservado na memória para o tipo double é de 8 bytes
  for(i = 1; i < 4; i++){
    printf("endereço de xd + %d = %X\n", i, xd+i);
  }
  return 0;
}

//Exemplo de impressão dos resultados:

endereço de x + 1 = A6F4AE6D
endereço de x + 2 = A6F4AE6E
endereço de x + 3 = A6F4AE6F

endereço de xi + 1 = A6F4AE54
endereço de xi + 2 = A6F4AE58
endereço de xi + 3 = A6F4AE5C

endereço de xf + 1 = A6F4AE44
endereço de xf + 2 = A6F4AE48
endereço de xf + 3 = A6F4AE4C

endereço de xd + 1 = A6F4AE28
endereço de xd + 2 = A6F4AE30
endereço de xd + 3 = A6F4AE38
