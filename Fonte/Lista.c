#include "Lista.h"

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

void Enfilerar(Lista *L, Celula dado)
{
	Celula *nova = new_celula();
	nova->dado = dado;

	L->fim->prox = nova;
	L->fim = nova;
	L->tam++;
}

void ImprimirLista(Lista *L)
{
	Celula *tmp = L->inicio->prox;

	while(tmp != NULL)
	{
		print_pessoa(tmp->dado);
		tmp = tmp->prox;
	}
}
