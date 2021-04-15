#include "Lista.h"

int Escolha ()
{
	int Opcao = 0;
	
	printf("SCE | Sistema de Controle de Estoque\n");
	printf("\n");
	printf("Escolha uma das opções abaixo:\n");
	printf("\n");
	printf(" 1 → Informações sobre o programa\n");
	printf(" 2 → Inserir um produto no início da lista\n");
	printf(" 3 → Inserir um produto no final da lista\n");
	printf(" 4 → Pesquisar um produto na lista\n");
	printf(" 5 → Remover um produto no início da lista\n");
	printf(" 6 → Remover um produto no final da lista\n");
	printf(" 7 → Remover um produto específico\n");
	printf(" 8 → Alterar dados de um produto específico\n");
	printf(" 9 → Exibir a lista inteira\n");
	printf("10 → Exibir o tamanho da lista\n");
	printf("\n");
	printf("0 → Sair do programa\n");
	printf("-------------------------------------------\n");
	printf("\n\n");
	scanf("%d", &Opcao);
	return Opcao;
}

int main ()
{
	/*Lista *L;
	NovaLista(L);*/
				
	int Opcao = 0;
	
	do
	{
		Opcao = Escolha();
		
		switch(Opcao)
		{
			case 1:
			{
				printf("\n");
				printf("O programa 'SCE' faz parte de um trabalho dado\n");
				printf("pelo professor Kleber Souza aos estudantes da\n");
				printf("disciplina de AEDII, com intuito de praticar os \n");
				printf("ensinos sobre TAD\n");	
				printf("------------------------------------------------\n");
				printf("\n");
			}
		}
	}while(Opcao != 0);
	
	return 0;
}
