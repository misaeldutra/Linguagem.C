#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void cadastronomes(char Nome[10][3][70]){
	printf("Informe o nome do primeiro candidato: ");
	fgets(Nome[0][0], 70, stdin);
	
    Nome[0][0][strcspn(Nome[0][0], "\n")] = 0; //para retirar o "\n" ;
	
	printf("Informe o nome do segundo candidato: ");
	fgets(Nome[0][1], 70, stdin);
	
	Nome[0][1][strcspn(Nome[0][1], "\n")] = 0;
	
	strcpy(Nome[0][2], "Nulo"); //ou seja, opção "Nulo", sendo fixo;
	
	
}

void registrodevoto(int Vetor[10], int vt, int eleitor){
	Vetor[eleitor] = vt; //pora registrar o voto 1, 2 ou 3;
}

void exibicaoderesultado(char Nome[10][3][70], int Vetor[10], int TotaldeEleitores){
	int i, vtcand1 = 0;
	int vtcand2 = 0;
	int vtnulos = 0;
	
	for(i = 0; i<TotaldeEleitores; i++){
		if(Vetor[i] == 1){
			vtcand1++;
		} else if(Vetor[i] == 2){
			vtcand2++;
		} else if(Vetor[i] == 3){
			vtnulos++;
		}
	}
	
	printf("\nResultado final da eleição: \n");
	
	printf("%s = %d votos\n", Nome[0][0], vtcand1);
	printf("%s = %d votos\n", Nome[0][1], vtcand2);
	printf("%s = %d votos nulos\n", Nome[0][2], vtnulos);
	
	}


int main(){
	setlocale(LC_ALL,"Portuguese");
	char Nome[10][3][70]; 
	// 10 seria o número de eleitores q são possíveis
	// 3 é porque são 3 opções de votos (O nome do primeiro candidato, o nome do segundo candidato, e o "Nulo")
	//o 70 vai ser o tamamnho max de caracteres para cada nome
	int Vetor[10]; //vetor para guardar os votos(1, 2 ou 3);
	int vt; //votos
	int TotaldeEleitores = 0;
	int eleitor = 0;
	
	cadastronomes(Nome); // chamada de função para o usuario cadastrar os nomes;
	
	do{ //para aparecer o menu;
		printf("\nMenu da eleição:\n");
		printf("1. %s\n", Nome[0][0]); //referente ao candidato 1;
		printf("2. %s\n", Nome[0][1]); //referente ao candidato 2;
		printf("3. %s\n", Nome[0][2]); //referente ao "Nulo";
		printf("4. Finalizar votação!\n");
		
		printf("Aproveite e escolha uma opção (1 á 4): ");
		scanf("%d", &vt);
		
		//para verificar se a opc é valida:
		
		if(vt >= 1 && vt <= 3 ){
			registrodevoto(Vetor, vt, eleitor);
			TotaldeEleitores++;
			eleitor++;
		} else if( vt != 4){
			printf("\nOpção Informada é Incorreta!!\n");
		}
		
		
	}while(vt != 4 && TotaldeEleitores < 10);

	
	//quando o usuario escolher a opção 4:
	exibicaoderesultado(Nome, Vetor, TotaldeEleitores); //Ao final, chamada de funçaõ para exibir o resultado;

	
	
	return 0;
}
