/*
	Name: Estatística Covid-19
	Author: Ítalo Stefânio Freitas Costa & Jayro Eduardo Marques de Sousa
	Date: 15/05/20 20:11
	Description: Trabalo para obtenção de 50% da avaiação AV1
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int idade, i;
char sexo, casoConfirmado, CasoObito;
int TotalMulherConf, TotalMulherDescart, TotalMulherConfObito, TotalHomemConf,TotalHomemDescart,TotalHomemConfObito;
int homemconf20, homem41desc, homem61desc, homem81desc, homem60desc;
int mulher20, homemconf20, mulher40, mulher41, mulher60, mulher80; 
int TotalGeralMulher,TotalGeralHomem, TotalGeral;

void Entrada(){
	printf("Digite a quantidade de pessoas pesquisadas: ");
	scanf("%d", &TotalGeral);
}

void Processamento(){
	system("cls");
	printf("Informe os dados do paciente(Idade, Sexo[F ou M], Caso[S ou N], Obito[S ou N]) [Ex. 25 F S S] \n");
    for(i = 0; i < TotalGeral; i++){ 
		scanf("%d %c %c %c", &idade, &sexo, &casoConfirmado, &CasoObito);
      	if ((sexo == 'F') && (casoConfirmado == 'S')){ 
      	 	TotalMulherConf++;
	  	}
		if ((sexo=='F')&&(casoConfirmado=='N')){
      		TotalMulherDescart++;
	  	}
		if ((sexo=='M')&&(casoConfirmado=='S')) {
	  		TotalHomemConf++;
	  	}
		if ((sexo=='M')&&(casoConfirmado=='N')) {
	  		TotalHomemDescart++;
	  	}
		if ((sexo=='F')&&(casoConfirmado=='S')&&(CasoObito=='S')){ 
      	 	TotalMulherConfObito++;
      	}
		if ((sexo=='M')&&(casoConfirmado=='S')&&(CasoObito=='S')){ 
      	 	TotalHomemConfObito++;
      	}
		if ((sexo=='M')&&(casoConfirmado=='S')&&(homemconf20>1)&&(homemconf20<=20)){
     		homemconf20++;
      	}
		if ((sexo=='M')&&(casoConfirmado=='N')&&(idade>21)&&(idade<=40)){
	 		homem41desc++;
      	}
		if((sexo=='M')&&(casoConfirmado=='N')&&(idade<41)&&(idade<=60)){
	 		homem60desc++;
	  	}
		if ((sexo=='M')&&(casoConfirmado=='N')&&(idade>61)&&(idade<=80)){
	 		homem61desc++;
	  	}
		if ((sexo=='M')&&(casoConfirmado=='N')&&(idade>81)&&(idade<=100)){
	 		homem81desc++;
	  	}
		if ((sexo=='F')&&(casoConfirmado=='S')&&(idade>1)&&(idade<=20)){
	 		mulher20++;
	  	}
		if ((sexo=='F')&&(casoConfirmado=='S')&&(idade>21)&&(idade<=40)){
	 		mulher40++;
	  	}
		if ((sexo=='F')&&(casoConfirmado=='S')&&(idade>41)&&(idade<=60)){
	 		mulher41++;
	  	}
		if ((sexo=='F')&&(casoConfirmado=='S')&&(idade>61)&&(idade<=80)){
	 		mulher60++;
	  	}
		if ((sexo=='F')&&(casoConfirmado=='S')&&(idade>81)&&(idade<=100)){
	 		mulher80++;
	  	}	 
		if (sexo=='F'){
		 	TotalGeralMulher++;
		}
		else {
		    TotalGeralHomem++;
		}  
	}
}

void Saida(){
	system("cls");
	printf("=============================================================================================================================\n");
    printf("                                                ESTATISTICA DO COVID-19                                                      \n");
    printf("=============================================================================================================================\n");
    printf("| FAIXA ETARIA FEMININA | TOTAL  | FAIXA ETARIA MASCULINA | TOTAL  | CONFIRMADO | TOTAL | DESCARTADO | TOTAL | OBITOS | TOTAL |\n");
    printf("|-----------------------|------- |------------------------|------- |------------|-------|------------|-------|--------|-------|\n");
    printf("|       DE 0 A 20       |   %d   |       DE 0 A 20        |   %d   |  MULHERES  |   %d  |  MULHERES  |   %d  |MULHERES|   %d  |\n", mulher20, homemconf20, TotalMulherConf, TotalMulherDescart, TotalMulherConfObito);
    printf("|       DE 21 A 40      |   %d   |       DE 21 A 40       |   %d   |   HOMENS   |   %d  |   HOMENS   |   %d  | HOMENS |   %d  |\n", mulher40,homem41desc,TotalHomemConf,TotalHomemDescart,TotalHomemConfObito);
    printf("|       DE 41 A 60      |   %d   |       DE 21 A 40       |   %d   |            |       |            |       |        |       |\n", mulher41, homem60desc);
    printf("|       DE 61 A 80      |   %d   |       DE 21 A 40       |   %d   |            |       |            |       |        |       |\n", mulher60, homem61desc);
    printf("|       DE 81 A 100     |   %d   |       DE 21 A 40       |   %d   |            |       |            |       |        |       |\n", mulher80, homem81desc);
    printf("|-----------------------------------------------------------------------------------------------------------------------------|\n");   
	printf(" Totalizadores do relatório: \n");
	printf("Total Geral de Mulheres..............:    %d\n",TotalGeralMulher );
	printf("Total Geral de Homens................:    %d\n",TotalGeralHomem );
	printf("Total Geral de Homens Obitos.........:    %d\n",TotalHomemConfObito );
	printf("Total Geral de Mulheres Obitos.......:    %d\n",TotalMulherConfObito );
	printf("Total Geral .........................:    %d\n",TotalGeral );	
 	system("pause");
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	Entrada();
	Processamento();
	Saida();
	return 0;
}
