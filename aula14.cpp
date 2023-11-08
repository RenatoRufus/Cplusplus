#include <iostream>

using namespace std;

int main(){
    //Laço while

    int n=0;

    while(n<10){
        cout<< n <<"\n";
        //n++;
        cin>>n;
    }

    cout<<"Rotina finalizada\n";

     int cont = 0;
     while (cont < 20)
     {
        cout<<"escrita\n";
        cont++;
     }
     
    cout<<"Rotina finalizada\n";


     int cont2 = 20;
     while (cont2 > 0)
     {
        cout<<"escrita" << cont2 <<"\n";
        cont2--;
     }
     
    cout<<"Rotina finalizada\n";


     int cont3 = 0;
     while (cont3++ < 20)
     {
        cout<<"escrita - "<< cont3 <<"\n";
     }
     
    cout<<"Rotina finalizada\n";


    return 0;
}