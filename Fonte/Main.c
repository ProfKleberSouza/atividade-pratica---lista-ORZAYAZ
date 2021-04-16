#include "Lista.h"

int Escolha ()
{
	int Opcao = 0;
	
	printf("+---------------------------------------------+\n");
	printf("|     SCE - Sistema de Controle de Estoque    |\n");
	printf("+---------------------------------------------+\n");
	printf("|  0 | Sair do programa                       |\n");
	printf("|  1 | Informações sobre o programa           |\n");
	printf("|  2 | Inserir um produto no início da lista  |\n");
	printf("|  3 | Inserir um produto no final da lista   |\n");
	printf("|  4 | Pesquisar um produto na lista          |\n");
	printf("|  5 | Remover um produto no início da lista  |\n");
	printf("|  6 | Remover um produto no final da lista   |\n");
	printf("|  7 | Remover um produto específico          |\n");
	printf("|  8 | Alterar dados de um produto específico |\n");
	printf("|  9 | Exibir a lista inteira                 |\n");
	printf("| 10 | Exibir uma célula e suas informações   |\n");
	printf("| 11 | Exibir o tamanho da lista              |\n");
	printf("+---------------------------------------------+\n");
	printf("\n\n");
	scanf("%d", &Opcao);
	return Opcao;
}

int main ()
{
	Lista Estoque;
	NovaLista(&Estoque);
				
	int Opcao = 0;
	
	do
	{
		Opcao = Escolha();
		
		switch(Opcao)
		{
			case 1:
			{
				printf("\n");
				printf("+------------------------------+\n");
				printf("| Informações sobre o programa |\n");
				printf("+------------------------------+-----------------+\n");
				printf("| O programa 'SCE' faz parte de um trabalho dado |\n");
				printf("| pelo professor Kleber Souza aos estudantes da  |\n");
				printf("| disciplina de AEDII, com intuito de praticar   |\n");
				printf("| os ensinos sobre TAD.                          |\n");	
				printf("+------------------------------------------------+\n");
				printf("\n");
				break;
			}

			case 2:
			{
				printf("\n");
				printf("+---------------------------------------+\n");
				printf("| Inserir um produto no início da lista |\n");
				printf("+---------------------------------------+\n");	
				printf("\n");
				break;
			}
			
			case 3:
			{
				printf("\n");
				printf("+---------------------------------------+\n");
				printf("| Inserir um produto no final da lista  |\n");
				printf("+---------------------------------------+\n");	
				printf("\n");
				break;
			}
			
			case 4:
			{
				printf("\n");
				printf("+---------------------------------------+\n");
				printf("|    Pesquisar um produto na lista      |\n");
				printf("+---------------------------------------+\n");	
				printf("\n");
				break;
			}
			
			case 5:
			{
				printf("\n");
				printf("+---------------------------------------+\n");
				printf("| Remover um produto no início da lista |\n");
				printf("+---------------------------------------+\n");	
				printf("\n");
				break;
			}
			
			case 6:
			{
				printf("\n");
				printf("+---------------------------------------+\n");
				printf("|     Remover um produto específico     |\n");
				printf("+---------------------------------------+\n");	
				printf("\n");
				break;
			}
							
			case 7:
			{
				printf("\n");
				printf("+---------------------------------------+\n");
				printf("| Remover um produto no início da lista |\n");
				printf("+---------------------------------------+\n");	
				printf("\n");
				break;
			}
			
			case 8:
			{
				printf("\n");
				printf("+---------------------------------------+\n");
				printf("| Remover um produto no início da lista |\n");
				printf("+---------------------------------------+\n");	
				printf("\n");
				break;
			}
			
			case 9:
			{
				printf("\n");
				printf("+-------------------------+\n");
				printf("| Exibir a lista completa |\n");
				printf("+-------------------------+\n");	
				printf("\n");
				break;
			}
			
			case 10:
			{
				printf("\n");
				printf("+--------------------------------------+\n");
				printf("| Exibir uma célula e suas informações |\n");
				printf("+--------------------------------------+\n");	
				printf("\n");
				break;
			}
			
			case 11:
			{
				printf("\n");
				printf("+---------------------------+\n");
				printf("| Exibir o tamanho da lista |\n");
				printf("+---------+-----------------+\n");
				printf("| Tamanho | %d               |\n",TamanhoLista(&Estoque));
				printf("+---------+-----------------+\n");	
				printf("\n");
				break;
			}
			
			default:
			{
				printf("Opção inválida, tente novamente.\n");
			}
		}
		
	}while(Opcao != 0);
	
	return 0;
}
