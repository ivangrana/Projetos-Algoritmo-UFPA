typedef struct {
  char nome[80];
  char email[80];
  int numero;
} TipoItem;

typedef struct Celula* Apontador;

typedef struct Celula {
  TipoItem Item;
  Apontador Anterior, Prox;
} Celula;

typedef struct {
  Apontador primeiro, Last;
} TipoLista;

TipoLista *InicioLista();
void Esvaziar(TipoLista*);
bool EstaVazia(TipoLista*);
void Insere(TipoItem, TipoLista*);
Apontador Busca(int, TipoLista*);
TipoLista* CopiaLista(TipoLista*);
TipoItem Retira(Apontador, TipoLista*);
bool RemoveRepetido(TipoLista*);
void Imprime(TipoLista*);
bool ImprimeRepetido(TipoLista*);