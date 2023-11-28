#include <iostream>

using namespace std;

int main(){
  //switch case

  int val;
  cout<<"Selecione uma cor\n";
  cout<<"[1]=verde, [2]=azul, [3]=vermelho, [4,5,6]= cor de burro quando foge\n";
  cin>>val;  

  switch(val){
    
    case 1:
         cout<<"\nCor selecionada verde\n";
         break; 
    case 2:
         cout<<"\nCor selecionada azul\n";
        break;
    case 3:
         cout<<"\nCor selecionada vermelho\n";
        break;
    case 4:
    case 5:
    case 6:
         cout<<"\nCor selecionada burro quando foge\n";
        break;
    default:
         cout<<"\nNão foi inserido um valor válido\n";
        
  }
 
    cout<<"\nPrograma finalizado\n";

    return 0;
}