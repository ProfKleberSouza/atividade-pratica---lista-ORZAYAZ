#include <assert.h>
#include <stdio.h>
#include "Lista.h"

int main() 
{

  Lista Estoque;
  NovaLista(&Estoque);

  for(int i=0; i<5; i++)
  {
    Produto p;
    p.codigo = i+1;
    sprintf(p.descricao, "Produto %d", i+1);
    p.valor = rand()%100;
    p.quantidade = rand()%50;

    InserirFinal(&Estoque, p);   

  }

 
  ImprimirLista(&Estoque);
  RemoverEspecifico(&Estoque, Estoque.tam-1);

  printf("\nApós excluir:\n");
  ImprimirLista(&Estoque);
  
  return 0;
}
