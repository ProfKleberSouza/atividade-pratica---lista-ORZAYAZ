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


  Produto x;
  x.codigo = 0;
  sprintf(x.descricao, "Produto %d", 0);
  x.valor = rand()%100;
  x.quantidade = rand()%50;
  InserirInicio(&Estoque,x);
 
  ImprimirLista(&Estoque);
  printf("\nTamanho da Lista → %d\n",TamanhoLista(&Estoque));
  
  return 0;
}
