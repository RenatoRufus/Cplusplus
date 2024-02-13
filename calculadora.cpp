#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Digite a operação (+, -, *, /): ";
    cin >> op;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Resultado: " << num1 + num2;
            break;
        case '-':
            cout << "Resultado: " << num1 - num2;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Resultado: " << num1 / num2;
            } else {
                cout << "Erro: divisão por zero!";
            }
            break;
        default:
            cout << "Operação inválida!";
    }

    return 0;
}
