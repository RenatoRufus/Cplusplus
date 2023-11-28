#include<iostream>

using namespace std;

void imp(string txt ="Bruno");  //Bruno default caso omissão

int main(){
    //omissão argumentos, argumentos padrão

    //imp("Bruno");
    imp(); //omissão de argumento escreve defaut "Bruno"
    imp("Youtube");

    return 0;
}

void imp(string txt){
    cout<<"\n"<< txt <<"\n";

}