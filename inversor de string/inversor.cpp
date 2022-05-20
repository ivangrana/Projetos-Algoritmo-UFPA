#include <iostream>
#include "inversor.h"

using namespace std;
int Tamanho(char *palavra){
  int tamanho=0;
  for (int i = 0; palavra[i] != '\0';i++){
    tamanho++;
  }
  return tamanho;
}

void inverte_string(char *str){ 
int i;
for(i = Tamanho(str); i>=0;i--) cout<<str[i]<<"";
}


