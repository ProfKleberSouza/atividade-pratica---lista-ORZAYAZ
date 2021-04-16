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
    p.codigo = rand()%10;
    sprintf(p.descricao, "Produto %d", rand()%10);
    p.valor = rand()%100;
    p.quantidade = rand()%50;

    InserirFinal(&Estoque, p);   

  }

  ImprimirLista(&Estoque);
  printf("\nTamanho da Lista → %d\n",TamanhoLista(&Estoque));
  
  return 0;
}
