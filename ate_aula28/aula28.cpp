#include<iostream>
#include <stack>

using namespace std;


int main(){
    //pilhas

    stack <string> cartas;

    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouro");
    cartas.push("Rei de paus");

    cout<<"Tamanho da pilha: "<< cartas.size()<<"\n";
    cout<<"Carta do top: "<< cartas.top()<<"\n";


    cartas.pop();
    cartas.pop();

    cout<<"Tamanho da pilha: "<< cartas.size()<<"\n";
    cout<<"Carta do top: "<< cartas.top()<<"\n";


    return 0;
}