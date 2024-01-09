// não confundir vector com vetor
// Vector - array mais moderno
// Vetor

#include <iostream>
#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> num,num2;
    int tam,tam2,i;

    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);
   // num[3] = 100;

    num2.push_back(5);
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);

    cout<<"\n";

    //num.insert(num.begin(),888);
    num.insert(num.end(),777);
    num.insert(num.end()-1,555);
   // num.erase(num.end());



    tam  = num.size();
    tam2 = num2.size();     

    //num.swap(num2);   
    cout<<"Primeiro valor de num1: "<< num.front()<<endl;
    cout<<"Último valor de num1..: "<< num.back()<<endl;
    cout<<"Valor do meio.........: "<< num.at(tam/2)<<endl;


    
    cout<<"Tamanho do vector: " << tam << endl;
    for (i = 0; i < tam; i++)
    {
        cout<< num[i]<<"\n";
    }
    
    cout<<endl;
    for (i = 0; i < tam2; i++)
    {
        cout<< num2[i]<<"\n";
    }
    
    while(!num.empty())
    {
        num.pop_back();
    }
    
    cout<<"Novo tamanho de num: " << num.size();
    cout<<"endl";


    return 0;
}

