#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pessoa {
protected:
    string nome;
    string sexo;
    int idade;
public:
    Pessoa() {

    }

    Pessoa(string name, int age, string gender) {
        nome = name;
        idade = age;
        sexo = gender;
    }

    string getNome() const {
        return nome;
    }

    void setNome(string name) {
        nome = name;
    }

    int getIdade() const {
        return idade;
    }

    void setIdade(int age) {
        idade = age;
    }

    string getSexo() const {
        return sexo;
    }

    void setSexo(char gender) {
        sexo = gender;
    }

    void incrementaIdade() {
        idade++;
    }
};
