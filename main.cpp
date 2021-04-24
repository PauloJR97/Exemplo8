#include <iostream>
#define A 6
using namespace std;

int main() {
  int vet[A];
 
 //Leitura
 for(int i = 0; i < A; i++){
   cin>>vet[i];
 }

 //Saida
 for(int i = (A - 1); i >= 0; i--){
   cout<<vet[i]<<" ";
 }


  std::cout << "Showw!\n";
}