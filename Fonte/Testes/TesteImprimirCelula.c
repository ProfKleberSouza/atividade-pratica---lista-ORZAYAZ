#include "Lista.h"

int main ()
{
	Celula C;
	
	C.dado.codigo = 0001;
	C.dado.quantidade = 3;
	C.dado.valor = 55.1;
	
	ImprimirCelula(C);
	return 0;
}


