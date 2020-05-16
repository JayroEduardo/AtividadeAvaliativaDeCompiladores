/*
	Name: Calculadora N�o otimizada
	Author: �talo Stef�nio Freitas Costa & Jayro Eduardo Marques de Sousa
	Date: 16/05/20 23:59
	Description: A dupla dever� substituir o desvio condicional IF-ELSE por fun��es, ou seja, para cada opera��o matem�tica voc� deve criar uma fun��o
	do tipo void(N�o retorna nada), para fazer o acionamento das fun��es voc� deve substituir o IF por Switch case 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int ope;
void Telaprincipal(){
	printf("=================================\n");
	printf("|         CALCULADORA            |\n");
	printf("|--------------------------------|\n");
	printf("|  1- Somar       |   2-Subtrai  |\n");
	printf("|================================|\n");
	printf("|  3 - Multiplicar|   4-Dividir  |\n");
	printf("|================================|\n");
	printf("|            5-Sair              |\n");
	printf("|================================|\n");
	printf(" Informe a opera��o desejada ou 5 para sair\n");
	scanf("%d",&ope);
}

int entrada(){
	int a;
		printf("Digite o n�mero: ");
			scanf("%d", &a);
				return a;
}

int Soma(int a, int b){
	return a+b;
}

int Subtracao(int a, int b){
	return a-b;
}

int Multiplicacao(int a, int b){
	return a*b;
}

int Divisao(int a, int b){
	return a/b;
}

int main(){
setlocale(LC_ALL, "Portuguese");
int a = entrada(), b = entrada();
	do{
    	Telaprincipal();
    	 	system("cls");
			switch(ope){
				case 1: {
					printf("O resultado da opera��o �: %d \n", Soma(a, b));
					break;
				}
				case 2:{
					printf("O resultado da opera��o �: %d \n", Subtracao(a, b));
					break;
				}
				case 3:{
					printf("O resultado da opera��o �: %d \n", Multiplicacao(a, b));
					break;
				}
				case 4:{
					printf("O resultado da opera��o �: %d \n", Divisao(a, b));
					break;
				}
			}
	} while(ope!=5);
      system("cls");
}
