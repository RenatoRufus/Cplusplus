#include<iostream>

using namespace std;

int main(){

    int *p;
    int vetor [10]; //array de 10

    p=&vetor[0]; //p=vetor;
    cout<<"\n" << p << "\n";

    p=&vetor[1]; //p=vetor;
    cout<<"\n" << p << "\n";
    
    *(p+1);
    p=&vetor[2]; //p=vetor;
    cout<<"\n" << p << "\n";

    //*(p+=1);
    p=&vetor[3]; //p=vetor;
    cout<<"\n" << p << "\n";

    p=&vetor[4]; //p=vetor;
    cout<<"\n" << p << "\n";

    p=&vetor[1];
    *p=10;
    cout<<"\n" << vetor [1] <<"\n";

    



    return 0;
}