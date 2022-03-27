//Calcule a soma de todos os números primos existentes entre 1 e 100.

const int len = 100;
int main() {
  int soma;
   int arr[100] = {0};
   for (int i = 2; i <= 100; i++) {
      for (int j = i * i; j <= 100; j+=i) {
         arr[j - 1] = 1;
      }
   }
   for (int i = 2; i <= 100; i++) {
      if (arr[i - 1] == 0)
        soma += i;
         
   }
  cout << "A soma de todos os números primos de 1 a 100 é: " << soma;

}
