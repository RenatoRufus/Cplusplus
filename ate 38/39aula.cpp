#include <iostream>
#include <stdio.h> //para função gets

using namespace std;

int main(){
   //
   //gets está obsoleto
   //cin>> vnome;
   //malloc(50*sizeof(vnome)); 

   string linha;

   cout<<"Digite um valor: "<< endl;
   getline(cin, linha);
   cout<<"Você digitou: " << linha << endl;   



    return 0;
}