#include "vetor.h"
#include<iostream>
#include<cmath>
using namespace std;
//const int x=elementos_.size();
Vetor::Vetor(int inicio,int fim){//inicio é fixo e fim variavel
        inicio_=inicio;
        string* elementos_=new string [inicio-fim];
}


void Vetor::atribuir(int i,string valor){
    int auxiliar=elementos_.size();
    int aux1=inicio_;
    if(!(i < aux1 || i > (aux1+elementos_.size()))){
        elementos_[i]=valor;
        inicio_++;
    }
    
}

string Vetor::valor(int i){
    inicio_=abs(i-inicio_);
    string x=elementos[x];
    return x;
}

Vetor::~Vetor(){
    delete [] elementos_;
}