#include <iostream>
#include <string>
#include "conta.c"

using namespace std;

int main(){
    contaBancaria c;
    c = inicializa(1111,12.5);
    imprime(c);
    deposito(&c,10);
    imprime(c);
    saque(&c,10);
    imprime(c);
    return 0;
}
