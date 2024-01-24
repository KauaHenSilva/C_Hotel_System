#if !defined(EXIBIRFLUXOFINANCEIROID)
#define EXIBIRFLUXOFINANCEIROID

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "../util/getReservaId.h"
#include "./exibirOnly/exibirOnly.h"

void exibirReservaId(StDbFluxoFinanceiro *FluxoFinanceiro, StDbControle controler){

  Utils.SystemComand.clearTela();

  printf("Exibindo todos os Fluxo Financeiros que possui ID...\n\n");
  for(int x = 0 ; x < *(controler.quantidadeDeReserva) ; x++)
  {
    printf("Fluxo Financeiro numero [%d]\n", x + 1);
    exibirOnly(FluxoFinanceiro, x);
  }

  int id;
  getReservaId(FluxoFinanceiro, *(controler.quantidadeDeReserva), &id);
  if(id == -1){
    printf("Nenhum Fluxo Financeiro cadrastrado!\n");
    return;
  };

  printf("O Fluxo Financeiro selecionado foi:\n");
  exibirOnly(FluxoFinanceiro, id);

}

#endif // EXIBIRFluxoFinanceiroID
