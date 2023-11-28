#include <iostream>

using namespace std;

int main(){
    //array - vetores

    int vetor[5];
    //int vetor0, vetor1, vetor2 ... vetor5

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;

    cout<< vetor[0] <<"\n";

    //erro vetor5  array até vetor[4] cinco não existe
    //cout<< vetor[5] <<"\n";
    int i;
    for(i = 0; i < 5; i++){

        cout<< vetor[i] <<"\n";
    }



    int vetor2 [5];

    vetor2[0] = 10;
    vetor2[1] = 20;
    vetor2[2] = 30;
    vetor2[3] = 40;
    vetor2[4] = 50;

    int b;
    for(b=0; b < sizeof(vetor2)/4; b++){
        cout<< vetor2[b] <<"\n";

    }



    int tam = 5;
    int vetor3 [tam];
    int c;

    vetor3[0] = 10;
    vetor3[1] = 20;
    vetor3[2] = 30;
    vetor3[3] = 40;
    vetor3[4] = 50;

    for(c=0; c < tam; c++){
        cout<< vetor3[c] <<"\n";

    }



    int tam2 = 5;
    int vetor4[tam2] = {1222,21,31,41,51};
    int d;

    for(d = 0; d < tam2; d++){
        cout<< vetor4[d] <<"\n"; 

    }




    return 0;
}