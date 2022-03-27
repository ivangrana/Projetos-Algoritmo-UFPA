

#include <iostream>

 using namespace std;
//Digitados dois números (base b e expoente e), calcule o resultado de b e utilizando apenas multiplicações.

int main(){
  int base_1 = 3,res = 1, exp = 3;

  for(int k = 0; k < exp ; k++){
  res = base_1*res; 
  }
  cout << res;
  return 0; 
}
  
