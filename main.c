#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {

  char nome[100];
  float altura = 0, peso = 0, imc = 0;

  printf("Digite seu nome Completo: ");
  gets(nome);

  printf("Digite sua altura usando (.), EXEMPLO: 1.67 : ");
  scanf("%f", &altura);

  printf("Digite seu peso usando (.), EXEMPLO: 72.5 : ");
  scanf("%f", &peso);

  if(strlen(nome) < 3){
    printf("Nome inválido, tente novamente");  
  }else if(altura <= 0){
    printf("Altura inválida, tente novamente!");
  }else if(peso <= 0){
    printf("Peso inválido, ente novamente");
  }else{
    
    imc = peso / pow(altura,2);
    
    printf("Nome: %s\n", nome);
    printf("Altura: %f\n", altura);
    printf("Peso: %f\n", peso);
    printf("IMC: %f\n", imc);
    printf("Classificação: ");
    
    if(imc <= 18.5){
      printf("Magreza");
    }else if(imc < 25){
      printf("Normal");
    }else if(imc < 30){
      printf("Sobrepeso");
    }else if(imc < 40){
      printf("Obesidade");
    }else if(imc > 39){
      printf("Obesidade Grave");
    }
  }
  
  return 0;
}