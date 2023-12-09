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
    Carro car;
    
    car.insere("No name", "Vermelho", 450, 350);
    car.mostra();
    car.mudaVel(1150);
    car.mostra();

    

    


    return 0;
} 