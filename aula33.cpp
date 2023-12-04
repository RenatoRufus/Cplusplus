#include <iostream>

using namespace std;

struct Carro
{
    string nome;
    string cor;
    int potencia;
    int velMax;

};


int main(){
    //struct
    Carro car1, car2;
    
    car1.nome="Tornado";
    car1.cor="Vermelho";
    car1.potencia=450;
    car1.velMax=350;

    car2.nome="Luxo";
    car2.cor="Preto";
    car2.potencia=250;
    car2.velMax=260;

    cout<< "Nome ....: "<< car1.nome<<"\n";
    cout<<"Cor ....: "<<car1.cor<<"\n";
    cout<<"Potência ....: "<<car1.potencia<<"\n";
    cout<<"Velocidade maxima ....: "<<car1.velMax<<"\n\n";

    cout<< "Nome ....: "<< car2.nome<<"\n";
    cout<<"Cor ....: "<<car2.cor<<"\n";
    cout<<"Potência ....: "<<car2.potencia<<"\n";
    cout<<"Velocidade maxima ....: "<<car2.velMax<<"\n";



    return 0;
}