//Autores: Ivan Luis Gama Grana e Cauã Victor Conceição da Silva

#include "lista.c"
#include <iostream>
using namespace std;
int main(void) {
  int escolha;
  TipoLista *Lista;
  Lista = InicioLista();
  system("clear||cls");
  while (1) {
    cout << "MENU DE OPCOES:" << endl;
    cout << "1 - Inserir contato\n";
    cout << "2 - Remover contato pelo telefone\n";
    cout << "3 - Listar todos os contatos da lista\n";
    cout << "4 - Consultar contato pelo telefone\n";
    cout << "5 - Remover todos os contatos com telefoness repetidos\n";
    cout << "6 - Mostrar os contatos com telefones repetidos\n";
    cout << "7 - Sair\n";
    cout << "Insira a escolha: ";
    scanf("%d", &escolha);
    switch (escolha) {
    
    case 1: { 
      TipoItem x; 
      cout << "Digite o nome do contato:";
      cin.ignore(); 
      cin.get(x.nome, 80);
      cout << "Digite o email do contato:";
      cin.ignore(); 
      cin.get(x.email, 80);
      cout << "Insira o telefone do contato:";
      cin.ignore(); 
      cin >> x. numero;
      Insere(x, Lista); 
      system("clear||cls");
      cout << "Contato" << x.nome << "inserido...\n";
      break;
    }
    
    case 2: { 
      system("clear||cls"); int t;
      cout << "Digite o telefone:";
      cin >> t; Apontador r = Busca(t, Lista);
      if (r != NULL) {
        TipoItem Item = Retira(r, Lista);
        cout << "contato removido...\n";
      } else cout << "Esse telefone não esta na lista\n";
      break;
    }
    case 3:
      system("clear||cls");
      cout << "LISTA DE CONTATOS:\n";
      Imprime(Lista);
      break;
    case 4: { 
      system("clear||cls"); int t;
      cout << "Entre com o telefone desejado: ";
      cin >> t; Apontador r = Busca(t, Lista);
      if (r != NULL){
          cout << r->Item.nome << endl;
          cout << r->Item.email << endl;
          cout << r->Item.numero << endl;
          cout << "--------------------------------" << endl;
      }
      else cout << "Esse telefone nao esta na lista\n";
      break;
    }
    
    case 5: { 
      system("cls||clear");
      bool r = ImprimeRepetido(Lista);
      if (!r) cout << "Sem contatos repetidos!\n";
      break;
    }
    
    case 6: { 
      system("cls||clear");
      bool r = RemoveRepetido(Lista);
      if (!r) cout << "Nao ha contatos com valores repetidos...\n";
      break;
    }
    
    case 7: 
      exit(0);
   
    default: 
      cin.clear(); 
      cin.ignore();
      cout << "Opcao errada" << endl;
      break;
    }
  }
}