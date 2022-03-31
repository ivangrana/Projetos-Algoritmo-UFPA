#include <iostream>
#include <string>
#include "contaBancaria.h"
using namespace std;


contaBancaria inicializa (int num,double sal){
contaBancaria conta;
conta.numero = num;
conta.saldo = sal;
return conta;
}

void deposito (contaBancaria *conta,double valor){
conta ->saldo -= valor;
}

void saque(contaBancaria *conta,double valor){
    conta ->saldo -= valor;
}

void imprime(contaBancaria conta){
    cout << " numero " << conta.numero << " saldo R$ " << conta.saldo << endl;
}

