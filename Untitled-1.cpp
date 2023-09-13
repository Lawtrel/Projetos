#include<iostream>

using namespace std;

struct film{
    string nome;
    string autor;
    int ano;
    double preco;
};
void ler_film(film F){
    F.nome;
    F.autor;
    F.ano;
    F.preco;
    std::cout<<"informe o nome do filme:";
    std::cin>>F.nome;
    std::cout<<"informe o nome do autor:";
    std::cin>>F.autor;
    std::cout<<"informe o ano do filme:";
    std::cin>>F.ano;
    std::cout<<"informe o valor do filme:";
    std::cin>>F.preco;
}
void imprimir(string filme){
    film F;
    std::cout<<"o nome do filme eh:"<<F.nome<<endl;
    std::cout<<"o nome do autor eh:"<<F.autor<<endl;
    std::cout<<"o ano do filme eh:"<<F.ano<<endl;
    std::cout<<"o valor do filme eh:"<<F.preco<<endl;

}

int main(){
    string filme;
    struct film F;
    ler_film(F);
    imprimir(filme);
}