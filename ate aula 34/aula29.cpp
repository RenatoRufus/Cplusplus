#include <iostream>
#include <stack>

using namespace std;

int main(){
    //Pilhas

    stack <string> cartas;

    cartas.push("Rei de copas");
    cartas.push("Rei de espadas");
    cartas.push("Rei de ouro");
    cartas.push("Rei de paus");

    //cout<<"Tamanho da pilha: "<< cartas.size()<<"\n";
   // cout<<"Carta do top: "<< cartas.top()<<"\n";

     if (cartas.empty())
    {
        cout<<"Pilha vazia\n\n";
    }else{
        cout<<"Pilha com cartas\n\n";
    }

    while(!cartas.empty()){
        cartas.pop();
    }

   
    cout<<"Tamanho da pilha: "<< cartas.size()<<"\n";
   //cout<<"Carta do top: "<< cartas.top()<<"\n";

   
    
    //cout<<"Nova carta do topo: "<< cartas.top() <<"\n";


    return 0;
}

/*
    push
    pop
    top
    size
    empety
*/