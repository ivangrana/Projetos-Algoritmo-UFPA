#include <iostream>
#include "complexo.h"


using namespace std;

num_complexo inicializa(int realp, int imag){
    num_complexo numero;
    numero.imaginario = imag;
    numero.real = realp;
    return numero;

}

void soma(num_complexo a,num_complexo b){
    num_complexo res;
    res.real = a.real + b.real;
    res.imaginario = a.imaginario + b.imaginario;
    imprime(res);
}

void imprime(num_complexo numero){
    cout <<"parte real:"<< numero.real << "\nparte imaginária:" << numero.imaginario << "i" << endl;
}

int real(num_complexo numero){
  if(numero.imaginario == 0) cout << "é real";
  else cout << "é complexo\n";
  return 0;
  }

void copia(num_complexo* b,num_complexo a){
  b -> real = a.real; 
  b -> imaginario = a.imaginario;    
}

