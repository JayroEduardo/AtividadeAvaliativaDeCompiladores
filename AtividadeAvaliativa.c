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
int total, TotalMulherConf, TotalMulherDescart,TotalHomemConf, TotalHomemDescart,TotalMulherConfObito,TotalHomemConfObito;
int homem20, homem40, homem60, homem80, homem100, mulher20, mulher40, mulher60, mulher80, mulher100;
int homem20conf, homem40conf, homem60conf, homem80conf, homem100conf, homem20desc, homem40desc, homem60desc, homem80desc, homem100desc;
int mulher20conf, mulher40conf, mulher60conf, mulher80conf, mulher100conf, mulher20desc, mulher40desc, mulher60desc, mulher80desc, mulher100desc;
int homem20obito, homem40obito, homem60obito, homem80obito, homem100obito, mulher20obito, mulher40obito, mulher60obito, mulher80obito, mulher100obito;
int TotalGeralMulher = 0,TotalGeralHomem = 0,TotalGeral = 0; 

void Entrada(){
	printf("Digite a quantidade de Pessoas pesquisadas: ");
	scanf("%d", &total);
}

void Processamento(){
	system("cls");
	printf("Informe os dados do paciente(Idade, Sexo[F ou M], Caso[S ou N], Obito[S ou N]) [Ex. 25 F S S] \n");
	for (i = 0; i < total; i++){
		printf("%d: ", i);
		scanf("%d %c %c %c", &idade, &sexo, &casoConfirmado, &CasoObito);
		
      	if ((sexo == 'F') && (casoConfirmado == 'S')){ 
      	 	TotalMulherConf++;
	  	}
		if ((sexo == 'F') && (casoConfirmado == 'N')){
      		TotalMulherDescart++;
	  	}
		if ((sexo == 'M') && (casoConfirmado == 'S')){
	  		TotalHomemConf++;
	  	}
		if ((sexo == 'M') && (casoConfirmado == 'N')){
	  		TotalHomemDescart++;
	  	}
		if ((sexo == 'F' )&& (casoConfirmado == 'S') && (CasoObito == 'S')){ 
      	 	TotalMulherConfObito++;
      	}	
		if ((sexo == 'M') && (casoConfirmado == 'S') && (CasoObito == 'S')){ 
      	 	TotalHomemConfObito++;
      	}
		if ((sexo == 'M') && (casoConfirmado == 'S') && (CasoObito == 'S') && (idade > 1) && (idade <= 20)){
			homem20obito++;
      	}
		if ((sexo == 'M') && (casoConfirmado == 'S') && (CasoObito == 'S') && (idade > 21) && (idade <= 40)){
			homem40obito++;
      	}
		if ((sexo == 'M') && (casoConfirmado == 'S') && (CasoObito == 'S') && (idade > 41) && (idade <= 60)){
			homem60obito++;
      	}
		if ((sexo == 'M') && (casoConfirmado == 'S') && (CasoObito == 'S') && (idade > 61) && (idade <= 80)){
			homem80obito++;
      	}
		if ((sexo == 'M') && (casoConfirmado == 'S') && (CasoObito == 'S') && (idade > 81) && (idade <= 100)){
			homem100obito++;
      	}
		if ((sexo == 'F') && (casoConfirmado == 'S') && (CasoObito == 'S') && (idade > 1) && (idade <= 20)){
			mulher20obito++;
      	}
		if ((sexo == 'F') && (casoConfirmado == 'S') && (CasoObito == 'S') && (idade > 21) && (idade <= 40)){
			mulher40obito++;
      	}
		if ((sexo == 'F') && (casoConfirmado == 'S') && (CasoObito == 'S') && (idade > 41) && (idade <= 60)){
			mulher60obito++;
      	}
		if ((sexo == 'F') && (casoConfirmado == 'S') && (CasoObito == 'S') && (idade > 61) && (idade <= 80)){
			mulher80obito++;
      	}
		if ((sexo == 'F') && (casoConfirmado == 'S') && (CasoObito == 'S') && (idade > 81) && (idade <= 100)){
			mulher100obito++;
      	}
		if ((sexo == 'M') && (casoConfirmado == 'S') && (idade > 1) && (idade <= 20)){
			homem20++;
     		homem20conf++;
      	}
		if ((sexo == 'M') && (casoConfirmado == 'S') && (idade > 21) && (idade <= 40)){
	 		homem40conf++;
	 		homem40++;
	  	}
		if ((sexo == 'M') && (casoConfirmado == 'S') && (idade > 41) && (idade <= 60)){
	 		homem60conf++;
	 		homem60++;
	  	}
		if ((sexo == 'M') && (casoConfirmado == 'S') && (idade > 60) && (idade <= 80)){
	 		homem80conf++;
	 		homem80++;
	  	}
		if ((sexo == 'M') && (casoConfirmado == 'S') && (idade > 80) && (idade <= 100)){
	 		homem100conf++;
	 		homem100++;
	  	}
		if ((sexo == 'M') && (casoConfirmado == 'N') && (idade > 1) && (idade <= 20)){
	 		homem20desc++;
	 		homem20++;
	  	}
		if ((sexo == 'M') && (casoConfirmado == 'N') && (idade > 21) && (idade <= 40)){
	 		homem40desc++;
	 		homem40++;
      	}
		if ((sexo == 'M') && (casoConfirmado == 'N') && (idade < 41) && (idade <= 60)){
	 		homem60desc++;
	 		homem60++;
	  	}
		if ((sexo == 'M') && (casoConfirmado == 'N') && (idade > 61) && (idade <= 80)){
	 		homem80desc++;
	 		homem80++;
	  	}
		if ((sexo == 'M') && (casoConfirmado == 'N') && (idade > 81) && (idade <= 100)){
	 		homem100desc++;
	 		homem100++;
	  	}
		if ((sexo == 'F') && (casoConfirmado == 'S') && (idade > 1) && (idade <= 20)){
	 		mulher20conf++;
	 		mulher20++;
	  	}
		if ((sexo == 'F') && (casoConfirmado == 'S') && (idade > 21) && (idade <= 40)){
	 		mulher40conf++;
	 		mulher40++;
	  	}
		if ((sexo == 'F') && (casoConfirmado == 'S') && (idade > 41) && (idade <= 60)){
	 		mulher60conf++;
	 		mulher60++;
	  	}
		if ((sexo == 'F') && (casoConfirmado == 'S') && (idade > 61) && (idade <= 80)){
	 		mulher80conf++;
	 		mulher80++;
	  	}
		if ((sexo == 'F') && (casoConfirmado == 'S') && (idade > 81) && (idade <= 100)){
	 		mulher100conf++;
	 		mulher100++;
	  	}
		if ((sexo == 'F') && (casoConfirmado == 'N') && (idade > 1) && (idade <= 20)){
	 		mulher20desc++;
	 		mulher20++;
	  	}
		if ((sexo == 'F') && (casoConfirmado == 'N') && (idade > 21) && (idade <= 40)){
	 		mulher40desc++;
	 		mulher40++;
	  	}
		if ((sexo == 'F') && (casoConfirmado == 'N') && (idade > 41) && (idade <= 60)){
	 		mulher60desc++;
	 		mulher60++;
	  	}
		if ((sexo == 'F') && (casoConfirmado == 'N') && (idade > 61) && (idade <= 80)){
	 		mulher80desc++;
	 		mulher80++;
	  	}
		if ((sexo == 'F') && (casoConfirmado == 'N') && (idade > 81) && (idade <= 100)){
	 		mulher100desc++;
	 		mulher100++;
	  	}	 
		
		if (sexo == 'F'){
			TotalGeralMulher++;
		}
		else{
			TotalGeralHomem++;
		}
		TotalGeral++;
	}
}

void Saida(){
	system("cls");
	printf("------------------------------------------------------------------------------------------------------------------\n");
	printf("|                                              ESTATISTICA COVID-19                                              |\n");
	printf("------------------------------------------------------------------------------------------------------------------\n");
	printf("| FAIXA ETARIA FEMININA | TOTAL | FAIXA ETARIA MASCULINA | TOTAL |  CONFIRMADOS  |  DESCARTADOS  |     OBITOS    |\n");
	printf("|                       |       |                        |       |MULHERES|HOMENS|MULHERES|HOMENS|MULHERES|HOMENS|\n");
	printf("|-----------------------|-------|------------------------|-------|---------------|---------------|---------------|\n");
	printf("|       DE 0 A 20       |  %2d   |        DE 0 A 20       |  %2d   |  %2d    | %2d   |  %2d    | %2d   |  %2d    | %2d   |\n", mulher20, homem20, mulher20conf, homem20conf, mulher20desc, homem20desc, mulher20obito, homem20obito);
	printf("|       DE 21 A 40      |  %2d   |        DE 21 A 40      |  %2d   |  %2d    | %2d   |  %2d    | %2d   |  %2d    | %2d   |\n", mulher40, homem40, mulher40conf, homem40conf, mulher40desc, homem40desc, mulher40obito, homem40obito);
	printf("|       DE 41 A 60      |  %2d   |        DE 41 A 60      |  %2d   |  %2d    | %2d   |  %2d    | %2d   |  %2d    | %2d   |\n", mulher60, homem60, mulher60conf, homem60conf, mulher60desc, homem60desc, mulher60obito, homem60obito);
	printf("|       DE 61 A 80      |  %2d   |        DE 61 A 80      |  %2d   |  %2d    | %2d   |  %2d    | %2d   |  %2d    | %2d   |\n", mulher80, homem80, mulher80conf, homem80conf, mulher80desc, homem80desc, mulher80obito, homem80obito);
	printf("|       DE 81 A 100     |  %2d   |        DE 81 A 100     |  %2d   |  %2d    | %2d   |  %2d    | %2d   |  %2d    | %2d   |\n", mulher100, homem100, mulher100conf, homem100conf, mulher100desc, homem100desc, mulher100obito, homem100obito);
	printf("|----------------------------------------------------------------------------------------------------------------|\n");
	printf("\nTotalizadores do relatório: \n");
	printf("Total Geral de Mulheres..............:    %d\n", TotalGeralMulher);
	printf("Total Geral de Homens................:    %d\n", TotalGeralHomem);
	printf("Total Geral de Homens Obitos.........:    %d\n", TotalHomemConfObito);
	printf("Total Geral de Mulheres Obitos.......:    %d\n", TotalMulherConfObito);
	printf("Total Geral .........................:    %d\n", TotalGeral);	
	system("pause");
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	Entrada();
	Processamento();
	Saida();
	return 0;
}
