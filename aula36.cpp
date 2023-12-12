//Ponteiros
#include <iostream>

using namespace std;

int main(){
    //ponteiro armazena o endereço de outra variável

    string veiculo = "Carro";
    string *ponteiroveiculo;  //*  ponteiro
    ponteiroveiculo = &veiculo; //ponteiro recebe o endereço da variável veículo



    //cout<< veiculo <<"\n";
    //cout<< ponteiroveiculo <<"\n";
    cout<< ponteiroveiculo <<"\n" << &veiculo <<"\n\n ";

    *ponteiroveiculo = "Moto"; //No endereço apontado por ponteiro
                               // adicione o valor moto

    cout<< veiculo <<"\n" << *ponteiroveiculo;                            


    return 0;
}