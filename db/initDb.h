#if !defined(INITDB)
#define INITDB

#include "./model.h"

#include <stdlib.h> 

StDbQuartos *dbQuartos = NULL;
StDbClientes *dbClintes = NULL;
StDbFluxoFinanceiro *DbFluxoFinanceiro = NULL;

int quantidadeDeQuarto = 0;
int quantidadeDeCLientes = 0;

#endif // INITDB
