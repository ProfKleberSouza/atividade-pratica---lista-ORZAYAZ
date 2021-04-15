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

void NovaFila(Lista *L)
{
	Celula *nova = NovaCelula();

	L->inicio = nova;
	L->fim = nova;
	L->tam = 0;
}

void InserirFinal(Lista *L);
void InserirInicio(Lista *L);


//void Pesquisar(Lista *L, );

void RemoverFinal(Lista *L);
void RemoverInicio(Lista *L);

void RemoverEspecifico();
void AlterarProduto(Lista *L, int Codigo);

void ImprimirCelula(Celula C)
{
	printf("Código → %d\n",C.dado.codigo);
	printf("Descrição → %s\n",C.dado.descricao);
	printf("Valor → %.2f\n",C.dado.valor);
	printf("Quantidade → %d\n",C.dado.quantidade);
}

//Demais funcionalidades do sistema

#endif