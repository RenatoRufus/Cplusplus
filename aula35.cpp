#include <iostream>

using namespace std;

struct Carro
{
    string nome;
    string cor;
    int pot;
    int velMax;
    int vel;

    void insere(string stnome, string stcor, int stpot, int stvelmax){

        nome=stnome;
        cor=stcor;
        pot=stpot;
        velMax=stvelmax;
        vel=0;

    }

    void mostra(){
    cout<< "Nome....: "<<nome<<"\n";
    cout<<"Cor....: "<<cor<<"\n";
    cout<<"Potência....: "<<pot<<"\n";
    cout<<"Velocidade...: "<<vel<<"\n";
    cout<<"Velocidade maxima....: "<<velMax<<"\n\n";
    }

    void mudaVel(int mv){
        vel=mv;
        if(vel > velMax){
            vel=velMax;
        }
        if(vel < 0){
            vel=0;
        }
    }


};


int main(){
    //struct
    Carro *carros = new Carro[5];
    Carro car1,car2,car3,car4,car5;


    carros[0] = car1;
    carros[1] = car2;
    carros[2] = car3;
    carros[3] = car4;
    carros[4] = car5;

    carros[0].insere("Tornado","Vermelho", 450,350);
    carros[1].insere("Luxo","Preto", 250,260);
    carros[2].insere("Família","Prata", 150,180);
    carros[3].insere("Trabalho","Branco", 80,120);
    carros[4].insere("Padrão","Cinza", 100,150);
    
    for (int i = 0; i < 5; i++)
    {
        carros[i].mostra();
    }
    

    return 0;
} 