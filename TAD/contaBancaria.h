typedef struct {
    int numero;
    double saldo;
}contaBancaria;

contaBancaria inicializa (int,double);
void deposito(contaBancaria *,double);
void saque (contaBancaria *,double);
void imprime (contaBancaria);