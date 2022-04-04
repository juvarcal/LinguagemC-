/*Programa para tranaçhar com orientação e objeto.
 Usando classe e objetos */


#include <iostream>

//chama da biblioteca STD
using std::cout;
using std::cin;

class Textos{
    public:
    void mensagem1(){
        cout << "\nOlá mundo.\n";    
    }
    
    void mensagem2(){
        cout << "Bom dia!\n";
    }

};

int main(){
    Textos txt;
    txt.mensagem1();
    txt.mensagem2();

    return 0;
}