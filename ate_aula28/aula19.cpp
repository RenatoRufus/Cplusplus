#include <iostream>

using namespace std;

int main(){
    // array bidimensional
    //          linha 3 coluna 4
     int matriz [3] [4];
     int l, c;

     matriz [0] [0] = 0;
     matriz [0] [1] = 0;
     matriz [0] [2] = 0;
     matriz [0] [3] = 0;
     
     matriz [1] [0] = 1;
     matriz [1] [1] = 1;
     matriz [1] [2] = 1;
     matriz [1] [3] = 1;

     matriz [2] [0] = 100;
     matriz [2] [1] = 200;
     matriz [2] [2] = 300;
     matriz [2] [3] = 400;

    for( l = 0; l <3 ; l++){
        for(c=0 ; c <4; c++){
            cout<< matriz [l] [c] << " ";
        }
        cout<<"\n";
    }


    return 0;
}