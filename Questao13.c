#include <stdio.h>
#include <stdlib.h>

//Função que compara os números gerados para ordená-los de forma crescente
void ordena(float *num, int n){
  float temp;
  int i, j;
  
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      if(i == 0){
        if(num[i] > num[j]){
          temp = num[j];
          num[j] = num[i];
          num[i] = temp;
}}
      else{
        if((num[i] < num[j]) && (num[i] < num[i-1])){
          temp = num[j];
          num[j] = num[i];
          num[i] = temp;
}}}}

}
int main(){
  //Declaração das variáveis necessárias para realização do programa
  float *num, temp, x;
  int y, z, n, i, j;
  
printf("Insira quantos valores serão processados: ");
scanf("%d", &n);

//Alocação dinâmica
  num = (float*)malloc(n*sizeof(float));

//Verificação da alocação
  if(num) printf("\nMemória alocada com sucesso!\n");
  else printf("\nErro ao alocar memória!\n");

//Função para processamento de números diferentes cada vez que o programa for iniciado, de acordo com o tempo
  srand(time(NULL));

//Geração aleatória dos números
  for(i = 0; i < n; i++){
    y = rand()%100;
    z = rand()%100;
    x = ((float)y/z);
    
    num[i] = x;
  }

//Impressão dos valores desordenados
  printf("\nNúmeros gerados: \n");
  for(i = 0; i < n; i++){
    printf("%.2f", num[i]);
    printf("||");
  }

//Chamada da função
ordena(num,n);
  
printf("\n");

//Impressão dos valores ordenados
printf("\nOrdenação: \n");
for(i = 0; i < n; i++){
  printf("%.2f", num[i]);
  printf("||");
}

//Liberação de memória
free(num);

return 0;
}