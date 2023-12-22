#include <iostream>

int main(){
    char linha[10];

    std::cout<<"Digite um valor: " << std::endl;
    std::cin.getline(linha, sizeof(linha));
    std::cout<< linha << std::endl;

    
    return 0;
}