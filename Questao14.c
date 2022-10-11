#include <stdio.h>
#include <stdlib.h>

//Função para comparar os números, associada à qsort
int comparar(const void *p, const void *q){
  if(*(float*)p == *(float*)q)
    return 0;
  else
    if(*(float*)p < *(float*)q)
      return -1;
  else
      return 1;
  }

int main(){
  float *num, x;//Ponteiro para float, variável "x" para salvar os números
  int y, z, n, i, j;//Variáveis para contagem
  
printf("Insira quantos valores serão processados: ");
scanf("%d", &n);//Recebe quantos valores serão processados

  num = (float*)malloc(n*sizeof(float));//Alocação dinâmica dos valores

//Verificação da alocação dinâmica
  if(num) printf("\nMemória alocada com sucesso!\n");
  else printf("\nErro ao alocar memória!\n");

//Função para processamento de números diferentes cada vez que o programa for iniciado, de acordo com o tempo
  srand(time(NULL));

//Geração aleatória dos números, do tipo float
  for(i = 0; i < n; i++){
    y = rand()%1000;//Guarda um valor inteiro aleatório 
    z = rand()%1000;//Guarda um valor inteiro aleatório
    x = ((float)y/z);
    
    num[i] = x;//Preenchimento do array
  }

//Impressão dos números gerados de forma desorganizada
  printf("\nNúmeros gerados: \n");
  for(i = 0; i < n; i++){
    printf("%.2f", num[i]);
    printf("||");
  }

//Ordenação crescente dos números através da função qsort
qsort(num,n,sizeof(float),comparar);
  
printf("\n");

//Impressão dos números ordenados
printf("\nOrdenação: \n");
for(i = 0; i < n; i++){
  printf("%.2f", num[i]);
  printf("||");
}

//Liberação da memória alocada
free(num);

return 0;
}