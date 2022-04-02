#include <iostream>
#include "complexo.c"
using namespace std;


int main(){
num_complexo a,b;
a = inicializa(1,0);
b = inicializa(2,3);
soma(a,b);
real(b);
imprime(a);
copia(&b,a);
imprime(a);
imprime(b);

  return 0;
}