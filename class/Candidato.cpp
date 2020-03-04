#include <iostream>
#include <string>
#include <vector>

#include "Pessoa.cpp"

using namespace std;


class Candidato : public Pessoa {
private:
    string nomePartido;
    int numCandidato;
    int contadorVoto = 0;
public:
    Candidato() {

    }

    Candidato(string nome, int idade, string sexo, string nP, int numC) : Pessoa{nome, idade, sexo} {
        nomePartido = nP;
        numCandidato = numC;
    }

    string getNomePartido() const {
        return nomePartido;
    }

    void setNomePartido(string nP) {
        nomePartido = nP;
    }

    int getNumCandidato() const {
        return numCandidato;
    }

    void setNumCandidato(int numC) {
        numCandidato = numC;
    }

    int getContador() {
        return contadorVoto;
    };

    void incrementaVotos() {
        contadorVoto++;
    }
};