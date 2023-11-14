#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    char palavra [30], letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto = false;
    
    chances = 6;
    tam = 0;
    i = 0;
    acerto = false;
    acertos = 0;

    cout<<"Digite a palavras secreta: ";
    cin>> palavra;

    //system ("clear");

    while (palavra[1] != '\0')  // \0 caracter do enter
    {
        ++i;
        tam++;
    }
        
        for ( i = 0; i < 30; i++)
        {
            secreta[i]='-';
        }
        
    while ((chances > 0) && (acerto < tam))
    {
        cout<<"Chances restantes: "<< chances <<"\n";
        cout<<"Palavra secreta: ";
        for (i = 0; i < tam; i++)
        {
            cout<< secreta[i];
        }
        cout<<"\n\nDigite uma letra: ";
        cin>> letra[0];
        for (i = 0; i < tam; i++)
        {
            if(palavra [i] == letra[0]){
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        if (!acerto)
        {
            chances--;
        }
        acerto=false;
        //system("clear");
        

    }
    
    if(acertos==tam){
        cout<<"Você venceu";
    }else{
        cout<<"Que pena, você perdeu";
    }


    return 0;
}