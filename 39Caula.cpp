#include<iostream>
#include <stdlib.h>

using namespace std;

int main(){

    char *vname;
    vname = (char *) malloc(sizeof(char));

    cout<< sizeof(char);
    cout<<"\n";
    cout<< sizeof(int);

    cin.getline(vname, sizeof(vname));
    cout<<"\n" << vname <<"\n";
    cout<< sizeof(vname);


    return 0;
}