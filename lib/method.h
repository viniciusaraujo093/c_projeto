#include <iostream>
#include <string>
#include <vector>

using namespace std;

void criarCandidato();

void votacao();

void mostrarResultado();

vector<Candidato> vetorCandidatos;

void criarCandidato() {
    int idade, numero;
    string nome, sexo, partido;

    cout << "Insira o nome do Candidato: " << endl;
    cin >> nome;
    cout << "Insira a idade do Candidato: " << endl;
    cin >> idade;
    cout << "Insira o sexo do Candidato: " << endl;
    cin >> sexo;
    cout << "Insira o partido do Candidato: " << endl;
    cin >> partido;
    cout << "Insira o numero do Candidato: " << endl;
    cin >> numero;
    Candidato c(nome, idade, sexo, partido, numero);
    vetorCandidatos.push_back(c);
    cout << "Canditado cadastrado com sucesso!" << endl;

}

void votacao() {
    int voto;
    cout << "Digite seu voto: " << endl;
    cin >> voto;
    for (int i = 0; i < vetorCandidatos.size(); i++) {
        if (voto == vetorCandidatos[i].getNumCandidato()) {
            cout << "Voto computado com sucesso!" << endl;
            vetorCandidatos[i].incrementaVotos();
        }
        /*if (voto == -1) {
            cout << "Voto nulo computado com sucesso!" << endl;
            vNulo++;
        }*/
    }

}

void mostrarResultado() {
    for (int i = 0; i < vetorCandidatos.size(); i++) {
        cout << "Nome: " << vetorCandidatos[i].getNome() << " - " "Total de votos: "
             << vetorCandidatos[i].getContador() << endl;
    }
    if (vetorCandidatos[0].getContador() != 1) {
        cout << "Vencedor : " << vetorCandidatos[0].getNome() << " com " << vetorCandidatos[0].getContador()
             << " votos." << endl;

    } else {
        cout << "Vencedor: " << vetorCandidatos[0].getNome() << " com " << vetorCandidatos[0].getContador()
             << " voto." << endl;
        
    }
}

void bolha(vector<Candidato>, int tamanho) {
    Candidato temp(" ", 0, " ", " ", 0);
    bool trocou = false;
    for (int i = tamanho - 1; i >= 1; i--) {
        for (int j = 1; j < tamanho; j++) {
            if (vetorCandidatos[j].getContador() > vetorCandidatos[j - 1].getContador()) {
                temp = vetorCandidatos[j];
                vetorCandidatos[j] = vetorCandidatos[j - 1];
                vetorCandidatos[j - 1] = temp;
                trocou = true;
            }
        }
        if (!trocou)
            break;
    }
}