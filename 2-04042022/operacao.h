#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

class Operacoes{
    public:
        void cadastro(string nome, string senha, string emsil, string nivel){
            cout<< "Cadastro de usuário realizado\n";
        }

        string login(string nome, string senha){
            return "\nSeja bem vindo!\n";
        }

        string trocarSenha(string nome, string senha){
            return "\nSenha alterada.\n";
        }


};