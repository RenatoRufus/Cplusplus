#include <iostream>

using namespace std;

int main(){

    // variavel   TIPO NOME = VALOR;
    int vidas = 0; //10, 25...
    char letra = 'B'; // 'B' 'A'
    double decimal = 5.2; // 2.59999 
    float decimal2 = 5.2; // precisão menor 2.5
    bool vivo = true; //true - false
    string nome = "Renatus"; //Texto

    char letras[20]; // vetor

    cout<< vidas << "\n";
    cout<< letra << "\n";
    cout<< decimal << "\n";
    cout<< decimal2 << "\n";
    cout<< vivo << "\n";
    cout<< nome << "\n";

    int vidas2 = 0;
    cout<<"Digite o número de vidas: \n";
    cin>> vidas2;
    string nome2 = "teste";
    cout<<"Digite seu nome: \n";
    cin>> nome2;
    
    cout<< vidas2 <<"\n";
    cout<<"\n" << nome2 <<endl;
    cout<<"\n";


    return 0;
}