#include <iostream>
#include <string>
#include <vector>

#include "class/Pessoa.cpp"
#include "class/Candidato.cpp"
#include "lib/method.h"

using namespace std;

int main() {
/*  QUESTÃO 1
    Pessoa p;
    p.setNome("Maria");
    p.setIdade(25);
    p.setSexo('F');
    p.incrementaIdade();
    cout <<"Nome: "<<p.getNome()<<endl<<"Idade: "<<p.getIdade()<<endl<<"Sexo: "<<p.getSexo()<< endl;
    return 0;
*/
/*  QUESTÃO 2
    Candidato a;
    a.setNome("Jose Silva");
    a.setIdade(30);
    a.setSexo('M');
    a.setNomePartido("Partido Popular Brasileiro");
    a.setNumCandidato(99);
    cout << "Insira o numero do candidato que deseja votar: " << endl;
    int numVoto;
    cin >> numVoto;
    if (numVoto == a.getNumCandidato()) {
        a.incrementaVotos();
    }
    cout << "Nome: " << a.getNome() << endl << "Idade: " << a.getIdade() << endl << "Sexo: " << a.getSexo() << endl;
    cout << "Numero do Candidato: " << a.getNumCandidato() << endl << "Nome do Partido: " << a.getNomePartido() << endl
         << "Numero de Votos: " << a.getContador();
    return 0;
*/
/*  QUESTÃO 3
    Candidato b;
    b.setNumCandidato(11);
    b.setNome("Cristina Ferreira");
    b.setNomePartido("Partido Social Conservador");
    cout << "Insira o numero do candidato que deseja votar: " << endl;
    int numVoto;
    cin >> numVoto;
    if (numVoto == b.getNumCandidato()) {
        b.incrementaVotos();
    }
    cout << "Numero do Candidato: " << b.getNumCandidato() << endl << "Nome: " << b.getNome() << endl
         << "Nome do Partido: " << b.getNomePartido() << endl << "Numero de Votos: " << b.getContador() << endl;
    return 0;
*/
//  QUESTÃO 4 E 5
    int qCandidato;
    char qVotos = 's';
    cout << "Bem Vindo ao programa de votacao!" << endl;
    cout << "Insira a quantidade de Candidatos que deseja votar: " << endl;
    cin >> qCandidato;
    cout << "Cadastre seu Candidato a seguir" << endl;
    for (int i = 0; i < qCandidato; i++) {
        criarCandidato();
    }
    while (qVotos != 'n') {
        votacao();
        cout << "Continuar Votando ?(S/N)" << endl;
        cin >> qVotos;
    }
    bolha(vetorCandidatos, qCandidato); /*QUESTAO 5*/
    mostrarResultado();
    return 0;
}