#include "Lista.h"

int Escolha ()
{
	int Opcao = 0;
	
	printf("\n\n");
	printf("  +---------------------------------------------+\n");
	printf("  |     SCE - Sistema de Controle de Estoque    |\n");
	printf("  +---------------------------------------------+\n");
	printf("  |  0 | Sair do programa                       |\n");
	printf("  |  1 | Informações sobre o programa           |\n");
	printf("  |  2 | Inserir um produto no início da lista  |\n");
	printf("  |  3 | Inserir um produto no final da lista   |\n");
	printf("  |  4 | Pesquisar um produto na lista          |\n");
	printf("  |  5 | Remover um produto no início da lista  |\n");
	printf("  |  6 | Remover um produto específico          |\n");
	printf("  |  7 | Remover um produto no final da lista   |\n");
	printf("  |  8 | Alterar dados de um produto específico |\n");
	printf("  |  9 | Exibir a lista inteira                 |\n");
	printf("  | 10 | Exibir uma célula e suas informações   |\n");
	printf("  | 11 | Exibir o tamanho da lista              |\n");
	printf("  +---------------------------------------------+\n");
	printf("\n\n");
	scanf("%d", &Opcao);
	return Opcao;
}

void Menu (Lista *Estoque)
{
	int Opcao = 0;
	int Voltar = 0;
	
	char Aux;
	
	Opcao = Escolha();
	
	switch(Opcao)
	{
		case 0:
		{
			Fim();
			exit(0);
		}
		
		case 1:
		{
			printf("\n");
			printf("  +------------------------------+\n");
			printf("  | Informações sobre o programa |\n");
			printf("  +------------------------------+-----------------+\n");
			printf("  | O programa 'SCE' faz parte de um trabalho dado |\n");
			printf("  | pelo professor Kleber Souza aos estudantes da  |\n");
			printf("  | disciplina de AEDII, com intuito de praticar   |\n");
			printf("  | os ensinos sobre TAD.                          |\n");	
			printf("  +------------------------------------------------+\n");
			printf("\n");
			
			Reiniciar();
			scanf("%d", &Voltar);
	
			if(Voltar == 1)
			{
				Menu(Estoque);
			}
			else
			{
				Fim();
				exit(0);
			}
			
			break;
		}

		case 2:
		{
				printf("\n");
				printf("  +---------------------------------------+\n");
				printf("  | Inserir um produto no início da lista |\n");
				printf("  +---------------------------------------+\n");	
				printf("\n");
				
				Produto P;
				
				printf("Digite o código do produto: ");
				scanf("%d", &P.codigo);
				printf("Digite a descrição do produto: ");
				scanf("%c",&Aux);
				scanf("%[^\n]",P.descricao);
				printf("Digite a quantidade do produto: ");
				scanf("%d", &P.quantidade);
				printf("Digite o valor do produto: ");
				scanf("%f", &P.valor);
				
				InserirInicio(Estoque, P); 
				
				printf("\n");
				printf("  +-----------------------+\n");
				printf("  | Infomações do produto |\n");
				printf("  +-----------------------+-------------------------------+\n");
				printf("  |        Código         | %-2d                            |\n",P.codigo);
				printf("  +-----------------------+-------------------------------+\n");
				printf("  |       Descrição       | %-30s|\n",P.descricao);
				printf("  |      Quantidade       | %-3d                           |\n",P.quantidade);
				printf("  |         Valor         | %04.2f                         |\n",P.valor);
				printf("  +-------------------------------------------------------+\n");   
				
				Reiniciar();
				scanf("%d", &Voltar);
	
				if(Voltar == 1)
				{
					Menu(Estoque);
				}
				else
				{
					Fim();
					exit(0);
				}
				break;
			}
			
		case 3:
		{
				
				printf("\n");
				printf("  +---------------------------------------+\n");
				printf("  | Inserir um produto no final da lista  |\n");
				printf("  +---------------------------------------+\n");	
				printf("\n");
				
				Produto P;
				
				printf("Digite o código do produto: ");
				scanf("%d", &P.codigo);
				printf("Digite a descrição do produto: ");
				scanf("%c",&Aux);
				scanf("%[^\n]",P.descricao);
				printf("Digite a quantidade do produto: ");
				scanf("%d", &P.quantidade);
				printf("Digite o valor do produto: ");
				scanf("%f", &P.valor);
				
				InserirFinal(Estoque, P);
				
				printf("\n");
				printf("  +-----------------------+\n");
				printf("  | Infomações do produto |\n");
				printf("  +-----------------------+-------------------------------+\n");
				printf("  |        Código         | %-2d                            |\n",P.codigo);
				printf("  +-----------------------+-------------------------------+\n");
				printf("  |       Descrição       | %-30s|\n",P.descricao);
				printf("  |      Quantidade       | %-3d                           |\n",P.quantidade);
				printf("  |         Valor         | %04.2f                         |\n",P.valor);
				printf("  +-------------------------------------------------------+\n");    
				
				Reiniciar();
				scanf("%d", &Voltar);
	
				if(Voltar == 1)
				{
					Menu(Estoque);
				}
				else
				{
					Fim();
					exit(0);
				}
				break;
		}
			
		case 4:
		{
				int Codigo = 0;
				
				printf("\n");
				printf("  +---------------------------------------+\n");
				printf("  |     Pesquisar um produto na lista     |\n");
				printf("  +---------------------------------------+\n");	
				printf("\n");
				printf("Digite o código do produto: \n");
				scanf("%d", &Codigo);
				Pesquisar(Estoque, Codigo);
				
				Reiniciar();
				scanf("%d", &Voltar);
	
				if(Voltar == 1)
				{
					Menu(Estoque);
				}
				else
				{
					Fim();
					exit(0);
				}
				break;
		}
			
		case 5:
		{
				printf("\n");
				printf("  +---------------------------------------+\n");
				printf("  | Remover um produto no início da lista |\n");
				printf("  +---------------------------------------+\n");	
				printf("\n");
				RemoverInicio(Estoque);
				printf("\nApós excluir:\n");
				ImprimirLista(Estoque);
				
				Reiniciar();
				scanf("%d", &Voltar);
	
				if(Voltar == 1)
				{
					Menu(Estoque);
				}
				else
				{
					Fim();
					exit(0);
				}
				break;
		}
			
		case 6:
		{
				int Codigo = 0;
				
				printf("\n");
				printf("  +---------------------------------------+\n");
				printf("  |     Remover um produto específico     |\n");
				printf("  +---------------------------------------+\n");	
				printf("\n");
				
				printf("Digite o código do produto: \n");
				scanf("%d", &Codigo);
				RemoverEspecifico(Estoque, Codigo);
				
				Reiniciar();
				scanf("%d", &Voltar);
	
				if(Voltar == 1)
				{
					Menu(Estoque);
				}
				else
				{
					Fim();
					exit(0);
				}
				break;
		}
							
		case 7:
		{
				printf("\n");
				printf("  +---------------------------------------+\n");
				printf("  | Remover um produto no final da lista  |\n");
				printf("  +---------------------------------------+\n");	
				printf("\n");
				RemoverFinal(Estoque);
				printf("\nApós excluir:\n");
				ImprimirLista(Estoque);
				
				Reiniciar();
				scanf("%d", &Voltar);
	
				if(Voltar == 1)
				{
					Menu(Estoque);
				}
				else
				{
					Fim();
					exit(0);
				}
				break;
		}
			
		case 8:
		{
				int Codigo = 0;
				
				printf("\n");
				printf("  +----------------------------------------+\n");
				printf("  | Alterar dados de um produto específico |\n");
				printf("  +----------------------------------------+\n");	
				printf("\n");
				
				printf("Digite o código do produto: \n");
				scanf("%d", &Codigo);
				AlterarProduto(Estoque,Codigo);
				
				Reiniciar();
				scanf("%d", &Voltar);
	
				if(Voltar == 1)
				{
					Menu(Estoque);
				}
				else
				{
					Fim();
					exit(0);
				}
				break;
		}
			
		case 9:
		{
				printf("\n");
				printf("  +-------------------------+\n");
				printf("  | Exibir a lista completa |\n");
				printf("  +-------------------------+\n");	
				printf("\n");
				ImprimirLista(Estoque);
				
				Reiniciar();
				scanf("%d", &Voltar);
	
				if(Voltar == 1)
				{
					Menu(Estoque);
				}
				else
				{
					Fim();
					exit(0);
				}
				break;
		}
			
		case 10:
		{
				int Codigo = 0;
				
				printf("\n");
				printf("  +--------------------------------------+\n");
				printf("  | Exibir uma célula e suas informações |\n");
				printf("  +--------------------------------------+\n");	
				printf("\n");
				
				printf("Digite o código do produto: \n");
				scanf("%d", &Codigo);
				Pesquisar(Estoque, Codigo);
				
				Reiniciar();
				scanf("%d", &Voltar);
	
				if(Voltar == 1)
				{
					Menu(Estoque);
				}
				else
				{
					Fim();
					exit(0);
				}
				break;
		}
			
		case 11:
		{
			printf("\n");
			printf("  +---------------------------+\n");
			printf("  | Exibir o tamanho da lista |\n");
			printf("  +---------+-----------------+\n");
			printf("  | Tamanho | %-2d            |\n",TamanhoLista(Estoque));
			printf("  +---------+-----------------+\n");	
			printf("\n");
				
			Reiniciar();
			scanf("%d", &Voltar);
	
			if(Voltar == 1)
			{
				Menu(Estoque);
			}
			else
			{
				Fim();
				exit(0);
			}
			break;
		}
			
		default:
		{
			printf("\n");
			printf("  +----------------------------------+\n");
			printf("  | Opção inválida, tente novamente. |\n");  
			printf("  +----------------------------------+\n");
			printf("\n");
				
			printf("  +--------------------------+\n");
			printf("  | Deseja tentar novamente? |\n");  
			printf("  +--------------------------+\n");
			printf("  |     1 - Sim | 0 - Não    |\n");
			printf("  +--------------------------+\n");
			scanf("%d", &Voltar);
			if(Voltar == 1)
			{
				Menu(Estoque);
			}
			else
			{
				Fim();
				exit(0);
			}
			break;
		}
	}
}

int main ()
{
	Lista Estoque;
	NovaLista(&Estoque);
	
	Menu(&Estoque);
	return 0;
}
