#include <iostream>

using namespace std;

int main(){

    //AND / && / E
    //OR / || / OU

    int num;
    num = 5;  
    // 1 2 3 4 5 6 7 8 9 10  
    // > 4 e <7
    // < 3 ou >8

    if(num > 4 && num <7){
        cout<<"\nValor aceito\n";
    }else{
        cout<<"\nValor não aceito\n";
    }

    int num2;
    num2 = 5;

    if(num2 < 3 || num2 >8){
        cout<<"\nValor aceito\n";
     }else{
        cout<<"\nValor não aceito\n";
     }

    // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
    // 16 17 18 19 20

    //3 a 6
    //10 a 14
    //16 a 19
    // ! operador not

    int num3;
    num3 = 7;

    if((num3 >= 3 && num3 <= 6) || (num3 >9 && num3 <15) || (num3 > 15 && num3 < 20) ){
        cout<<"\nValor aceito\n";
    }else{
        cout<<"\nValor não aceito\n";
    }

     int num10;    
     num10 = 1;

    if(!num10){        // ! inverte verdadeiro
        cout<<"\nVou ao clube\n";
    }else{
        cout<<"\nVou ao cinema\n";
    }





    return 0;
}