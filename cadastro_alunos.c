#include <stdio.h>
int main() {
  char nome[50];
  int idade; matricula;
  float altura;
  
printf("Digite seu nome: \n");
scanf("%s",&nome);
printf("Digite sua idade: \n");
scanf("%d", &idade);
printf("Digite sua altura em metros: \n");
scanf("%.2f", &altura);
printf("Digite seu numero de matricula: \n");
scanf("%d",&matricula);
printf("Seu nome é: %s\nSua idade é: %d anos\nSua altura é: %.2 metros\nSua matricula é %d\n", nome, idade, altura, matricula);
return 0;
}
