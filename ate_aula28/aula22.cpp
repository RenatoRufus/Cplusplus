#include <iostream>

using namespace std;

//funções
void texto();     //prototipar função
void teste();
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main(){
    int res;
    string transp[4] = {"carro", "moto", "Barco", "Avião"};
    texto();  // função
    

    for(int i = 0; i < 10; i++){
        teste();
    }

    soma(15, 5);  
    soma(10, 3); 

    res = soma2(175, 25);
    cout<<"Valor de res: " << res <<"\n";
    //cout<<"Valor de res: " << soma2(175, 25)<<"\n";

    tr(transp);

    return 0;
}

//void não tem valor de retorno
void texto(){
    cout<<"\n Texto da função ---- \n";
}


void teste(){
    cout<<"Teste testando o teste\n";
}

void soma(int n1, int n2){
    cout<<"soma dos valores :" << n1 + n2 <<"\n";
}

int soma2(int n1, int n2){
    return n1 + n2;
}

void tr(string tra[4]){
    for(int i =0; i<4 ; i++){
        cout<< tra[i] <<"\n";
    }
}
