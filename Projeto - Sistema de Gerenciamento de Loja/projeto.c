#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void cadastroproduto(char Produto[10][20], int Q[10], float P[10], int *contprodutos){
	
	int qtd_estoque = 0;
	char Nomedoproduto[20];
	float preco;
	
	if(*contprodutos >= 10){
		printf("Estoque com limite atingido!! Não dá pra cadastrar mais produtos!!\n");
		return;
	}
	
	printf("\n\n--CADASTRO DO PRODUTO--\n");
	
	printf("\nInforme o nome do produto: \n ");
	scanf(" %[^\n]", Nomedoproduto);
	
	Nomedoproduto[strcspn(Nomedoproduto, "\n")] = 0;
	
	
	printf("\nInforme a quantidade em estoque:\n ");
	scanf("%d", &qtd_estoque);
	getchar();
	
	printf("\nInforme o preço(R$) do produto:\n ");
	scanf("%f", &preco); //","
	
	strcpy(Produto[*contprodutos], Nomedoproduto);
	
	Q[*contprodutos] = qtd_estoque;
	P[*contprodutos] = preco;
	
	(*contprodutos)++;
	
	printf("\nProduto: (%s) \nCadastrado com sucesso!!!\n\n\n", Nomedoproduto);
	
}

void venderproduto(char Produto[10][20], int Q[10], float P[10], int *contprodutos){
	
	char Nomedoproduto[20];
	int qtdvendas = 0;
	int i;
	
	int localizei = 0; //para caso encontre um produto q não esteja cadastrado.
	
	float ptotal = 0;
	
	printf("\n\n--Venda do Produto--\n\n");
	
	printf("Informe o nome do produto: \n");
	scanf(" %[^\n]", Nomedoproduto);
	
	Nomedoproduto[strcspn(Nomedoproduto, "\n")] = 0;
	
	for(i = 0; i < *contprodutos; i++){
		if(strcmp(Produto[i], Nomedoproduto) == 0){
			localizei = 1;
			
			printf("\nProduto encontrado entre os cadastrados!!\n");
			printf("Produto encontrado = %s\n", Produto[i]);
			
			printf("\nPreço unidade: R$ %.2f\n", P[i]);
			
			printf("Quantidade disponível no estoque: %d\n", Q[i]);
			
			printf("\nInforme a quantidade que deseja: \n");
			scanf("%d", &qtdvendas);
			
			if(qtdvendas <= Q[i]){
				Q[i] = Q[i] - qtdvendas;
				
				ptotal = P[i] * qtdvendas;
				
				printf("\n\nVenda do Produto realizada com sucesso!!!\n\n");
				
				printf("Nome do Produto: %s\n", Produto[i]);
				printf("Quantidade que foi vendida: %d unidades.\n", qtdvendas); //opcional
				printf("Preço Total: R$ %.2f.\n", ptotal);
				printf("Quantidade atualizada do estoque: %d unidades.\n", Q[i]); //opcional	
							
			}else{
				printf("\nQuantidade no estoque indisponivel para venda!!\n");
			}
			break;
		}
	}
	
	if(!localizei){
		printf("\n\nProduto informado não encontrado no estoque!!\n");
	}
	
}

void pesquisarproduto(char Produto[10][20], int Q[10], float P[10], int *contprodutos){
	
	char Nomedoproduto[20];
	int i;
	int localizei = 0;
	
	printf("\nInforme o nome do produto: \n");
	scanf("%[^\n]", Nomedoproduto);
	
	Nomedoproduto[strcspn(Nomedoproduto, "\n")] = 0;
	
	for(i = 0; i < *contprodutos; i++){
		if(strcmp(Produto[i], Nomedoproduto) == 0){
			
			localizei = 1;
			
			printf("\nNome do Produto: %s.\n", Produto[i]);
			printf("Quantidade no estoque: %d unidades.\n", Q[i]);
			printf("Seu preço unitário: R$ %.2f.\n", P[i]);

		}
	}
	
	if(!localizei){
		printf("\n\nProduto não encontrado!!\n\n");
	}
	
}

void imprimirestoque(char Produto[10][20], int Q[10], float P[10], int *contprodutos){
	int i;
	
	printf("\n\n---------Estoque Geral de Produtos----------\n\n");
	
	if(*contprodutos == 0){
		printf("\nNenhum Produto foi Cadastrado!!.\n");
		return;
	}
	
	printf("%-20s %-15s  %-10s\n", "Produto", "Quantidade", "Preço");
	printf("-------------------------------------------\n");
	
	for(i = 0; i < *contprodutos; i++){
		printf("%-20s %-15d %-10.2f\n", Produto[i], Q[i], P[i]);
	}
	printf("\n");
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char Matriz[10][20];
	int opc;
	int Q[10]; //para a quantidade
	float P[10];//para os precos
	int qtd_produtos = 0;
	
	do{
		printf("\n---Menu de Opções---\n");
		
		printf("1. Cadastrar produto;\n");
		printf("2. Vender;\n");
		printf("3. Pesquisar produto;\n");
		printf("4. Imprimir estoque;\n");
		printf("5. Sair;\n");
		
		printf("\nEscolha uma opção (1 a 5): \n");
		scanf("%d", &opc);
		getchar();
		
		
		switch(opc){
			case 1:
				cadastroproduto(Matriz, Q, P, &qtd_produtos);
				break;
			
			case 2:
				venderproduto(Matriz, Q, P ,&qtd_produtos);
				break;
				
			case 3:
				pesquisarproduto(Matriz, Q, P, &qtd_produtos);
				break;
				
			case 4:
				imprimirestoque(Matriz, Q, P, &qtd_produtos);
				break;
				
			case 5:
				printf("\nENCERRAMENTO DO PROGRAMA...\n");
				break;
			default:
				printf("\n\nA Opção informada é Inválida!! \nEscolha outra opção (entre 1 e 5).\n\n");
				break;
				
		}
	}while(opc != 5);
	
	
	
	return 0;
}
