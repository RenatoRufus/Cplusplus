#include <iostream>

using namespace std;

class aviao{

public:
    int velocidade=0;
    int velMax;
    string tipo;
    void ini (int tp); //método

private:


};

void aviao::ini(int tp){
    if (tp == 1)
    {
        this->velMax=800;
        this->tipo="Jato";
    }else if(tp == 2){
        this->velMax=350;
        this->tipo="Monomotor";
    }else if(tp == 3){
        this->velMax=180;
        this->tipo="Planador";
    }
    

}

int main(){

    aviao *av1 = new aviao();
    aviao *av2 = new aviao();

    av1->ini(3);
    av2->ini(1);

    cout<< av1->velMax <<endl;
    cout<< av2->velMax;

    return 0;
}