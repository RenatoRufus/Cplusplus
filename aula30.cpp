#include <iostream>
#include <queue>

using namespace std;

int main(){
    // Fila - queue
    
    queue <string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout<<"Tamanho da fila: "<< cartas.size() <<"\n";
    cout<<"Primeira carta: " << cartas.front() <<"\n";
    cout<<"Primeira carta: " << cartas.back() <<"\n\n";


    while (!cartas.empty())
    {
        cout<<"Primeira carta: " << cartas.front() <<"\n";
        cartas.pop();
    }
    
   
    
    
    
    
    
    
    
    
    
    
    /*
    empty
    size
    front
    back
    push
    pop
    */





    return 0;
}