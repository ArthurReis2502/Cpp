#ifndef HEADER_H
#define HEADER_H
class pilha{//Definir os métodos e as variáveis
    private:
    float elementos[10000000];//pra saber quantos elementos a pilha tem, como nao sabemos, definimos um valor mt alto
    int tamanho;//Ele que vai contar o numero de elementos na pilha, vai somando toda hora
    public:
    pilha(); //Constroi uma pilha vazia. Estudar os constructors, pois eles tem o mesmo nome da classe/struct.
    void inserir(float k);//Insere um elemento no topo da pilha
    void remover();// remove um elemento no topo da pilha
    float topo();//retorna o elemento do topo
    bool vazia();
    
};





#endif