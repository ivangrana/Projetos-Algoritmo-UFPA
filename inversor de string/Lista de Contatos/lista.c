#include "lista.h"
#include <cstdlib>
#include <iostream>
using namespace std;
TipoLista *InicioLista() {
  TipoLista *Lista;
  Lista = (TipoLista*)malloc(sizeof(TipoLista));
  Esvaziar(Lista);
  return Lista;
}
void Esvaziar(TipoLista *Lista) {
  Lista->primeiro = (Apontador)malloc(sizeof(Celula));
  Lista->Last = Lista->primeiro;
  Lista->primeiro->Anterior = NULL;
  Lista->primeiro->Prox = NULL;
}
bool EstaVazia(TipoLista *Lista) {
  return (Lista->primeiro == Lista->Last);
}
void Insere(TipoItem x, TipoLista *Lista) {
  Apontador Aux = Lista->Last;
  Lista->Last->Prox = (Apontador)malloc(sizeof(Celula));
  Lista->Last = Lista->Last->Prox;
  Lista->Last->Anterior = Aux;
  Lista->Last->Item = x;
  Lista->Last->Prox = NULL;
}
Apontador Busca(int x, TipoLista *Lista) {
  if (!EstaVazia(Lista)) {
    Apontador i;
    for (i = Lista->primeiro->Prox; i != NULL; i = i->Prox)
      if (i->Item.numero == x) return i;
  } return NULL;
}
TipoLista *CopiaLista(TipoLista *Lista) {
  TipoLista *Aux = InicioLista(); Apontador i;
  for (i = Lista->primeiro->Prox; i != NULL; i = i->Prox)
    Insere(i->Item, Aux);
  return Aux;
}
TipoItem Retira(Apontador Cel, TipoLista *Lista) {
  Cel->Anterior->Prox = Cel->Prox;
  if (Cel->Prox == NULL) Lista->Last = Cel->Anterior;
  else Cel->Prox->Anterior = Cel->Anterior;
  TipoItem Item = Cel->Item;
  free(Cel); return Item;
}
bool RemoveRepetido(TipoLista *Lista) {
  bool r = 0;
  if (!EstaVazia(Lista)) {
    Apontador i, j; TipoItem Item;
    for (i = Lista->primeiro->Prox; i != NULL; i = i->Prox)
      for (j = i->Prox; j != NULL; j = j->Prox)
        if (i->Item.numero == j->Item.numero) {
          r = 1; Item = Retira(j, Lista);
          cout << "Contato duplicado removido:\n";
          printf("Nome: %s, Email: %s, Telefone: %i\n",
            Item.nome, Item.email, Item.numero);
        }
  } return r;
}
void Imprime(TipoLista *Lista) {
  if (!EstaVazia(Lista)) {
    Apontador i;
    for (i = Lista->primeiro->Prox; i != NULL; i = i->Prox){
    printf("Nome: %s\nEmail: %s\nTelefone: %i\n",i->Item.nome,i->Item.email, i->Item.numero); 
    cout << "--------------\n";
    }
  }
  else cout << "Não existem contatos!\n";
}

bool ImprimeRepetido(TipoLista *Lista) {
  bool r = 0;
  if (!EstaVazia(Lista)) {
    Apontador i, j; TipoItem Item;
    TipoLista *Aux = CopiaLista(Lista);
    for (i = Aux->primeiro->Prox; i != NULL; i = i->Prox)
      for (j = i->Prox; j != NULL; j = j->Prox)
        if (i->Item.numero == j->Item.numero) {
          r = 1; Item = Retira(j, Aux);
          cout << "Item com contato duplicado:\n";
          printf("Nome: %s, Email: %s, Telefone: %i\n",
            Item.nome, Item.email, Item.numero);
        } free(Aux);
  } return r;
}