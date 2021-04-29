#ifndef FILA_H
#define FILA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Produto
{
  int codigo;
  char descricao[30];
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

Celula *NovaCelula();
int TamanhoLista(Lista *L);
void NovaLista(Lista *L);
void InserirFinal(Lista *L, Produto P);
void InserirInicio(Lista *L, Produto P);
void Pesquisar(Lista *L, int Codigo);
void RemoverEspecifico(Lista *L, int Codigo);
void RemoverEspecificoPos(Lista *L, int Pos);
void RemoverInicio(Lista *L);
void RemoverFinal(Lista *L);
void AlterarProduto(Lista *L, int Codigo);
void ImprimirCelula(Celula C);
void ImprimirProduto(Produto P);
void ImprimirLista(Lista *L);
void Enfilerar(Lista *L, Produto dado);
void Reiniciar();
void Fim();

#endif
