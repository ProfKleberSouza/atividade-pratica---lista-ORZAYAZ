#ifndef FILA_H
#define FILA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Produto
{
  int codigo;
  char descricao[100];
  float valor;
  int quantidade;
}Produto;

typedef struct Celula
{
  Produto dado;
  struct Celula *prox;
}Celula;

typedef struct Lista
{
  Celula *inicio;
  Celula *fim;
  int tam;
}Lista;

Celula *NovaCelula()
{
	Celula *tmp = (Celula*) malloc(sizeof(Celula));
	tmp->prox = NULL;
	return tmp;
}

int TamanhoLista(Lista *L)
{
	return L->tam;
}

void NovaLista(Lista *L)
{
	Celula *nova = NovaCelula();

	L->inicio = nova;
	L->fim = nova;
	L->tam = 0;
}

void InserirFinal(Lista *L, Produto P)
{
	Celula *tmp = NovaCelula();
	tmp->dado = P;

	L->fim->prox = tmp;
	L->fim = tmp;
	L->tam++;
}

void InserirInicio(Lista *L, Produto P)
{
	L->inicio->dado = P;
	Celula *Auxiliar = NovaCelula();
	Auxiliar->prox = L->inicio;
	L->inicio = Auxiliar;
	
	L->tam++;
}


void Pesquisar(Lista *L, int Codigo)
{
	Celula *Anterior = L->inicio;
	Celula *Auxiliar = L->inicio->prox;
	
	while(Auxiliar!=NULL && Auxiliar->dado.codigo != Codigo)
	{
		Anterior = Anterior->prox;
		Auxiliar = Anterior->prox;
	}
	
	if(Auxiliar==NULL)
	{
		printf("Produto não encontrado, tente novamente.\n");
	}
	
	else
	{
		printf("\n");
		printf("+----------------------+------------------------+\n");
		printf("|        Código        | %d                      |\n",Codigo);
		printf("+----------------------+------------------------+\n");
		printf("|       Descrição      | %s              |\n",Auxiliar->dado.descricao);
		printf("|      Quantidade      | %d                     |\n",Auxiliar->dado.quantidade);
		printf("|         Valor        | %.2f                  |\n",Auxiliar->dado.valor);
		printf("+-----------------------------------------------+\n");
		printf("\n");
	}
}

void RemoverEspecifico(Lista *L, int Codigo)
{
	Celula *Anterior = L->inicio;
	Celula *Auxiliar = L->inicio->prox;
	
	while(Auxiliar!=NULL && Auxiliar->dado.codigo != Codigo)
	{
		Anterior = Anterior->prox;
		Auxiliar = Anterior->prox;
	}
	
	if(Auxiliar!=NULL)
	{
		Anterior->prox = Auxiliar->prox;
		free(Auxiliar);	
		Auxiliar = NULL;
		
		if(Anterior->prox == NULL)
		{
			L->fim = Anterior;
		}
		
		L->tam--;
	}
}

void RemoverEspecificoPos(Lista *L, int Pos)
{
	Celula *Anterior = L->inicio;
	Celula *Auxiliar = L->inicio->prox;
	
	while(Auxiliar!=NULL && Pos > 0)
	{
		Anterior = Anterior->prox;
		Auxiliar = Anterior->prox;
		Pos--;
	}
	
	if(Auxiliar!=NULL)
	{
		Anterior->prox = Auxiliar->prox;
		free(Auxiliar);	
		Auxiliar = NULL;
		
		if(Anterior->prox == NULL)
		{
			L->fim = Anterior;
		}
		
		L->tam--;
	}
}

void RemoverInicio(Lista *L)
{
	RemoverEspecifico(L,1);
}

void RemoverFinal(Lista *L)
{
	RemoverEspecifico(L,L->tam);
}

void AlterarProduto(Lista *L, int Codigo);

void ImprimirCelula(Celula C)
{
	printf("Código → %d\n",C.dado.codigo);
	printf("Descrição → %s\n",C.dado.descricao);
	printf("Valor → %.2f\n",C.dado.valor);
	printf("Quantidade → %d\n",C.dado.quantidade);
}

void ImprimirProduto(Produto P)
{
	printf("| %d      | %s                 | %.2f | %d         |\n",P.codigo,P.descricao,P.valor,P.quantidade);
}

void ImprimirLista(Lista *L)
{
	printf("+--------+---------------------------+-------+------------+\n");
	printf("| Código |         Descrição         | Valor | Quantidade |\n");
	printf("+--------+---------------------------+-------+------------*\n");
	
	Celula *tmp = L->inicio->prox;
	while(tmp != NULL)
	{
		ImprimirProduto(tmp->dado);
		printf("-----------------------------------------------------------\n");
		tmp = tmp->prox;
	}
}

void Enfilerar(Lista *L, Produto dado)
{
  Celula *nova = NovaCelula();
  nova->dado = dado;

  L->fim->prox = nova;
  L->fim = nova;
  L->tam++;
}

#endif
