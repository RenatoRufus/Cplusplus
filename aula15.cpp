#include <iostream>

using namespace std;

int main(){
    //comando break

    int cont;
    cont = 0;

    while(cont < 1000){
        cout<< cont <<"\n";
        //cont++;
        if(cont == 500){
            break;
        }
        cont++;
    }






    return 0;
}