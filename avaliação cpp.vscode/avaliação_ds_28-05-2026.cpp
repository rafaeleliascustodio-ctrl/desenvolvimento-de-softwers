#include <iostream>
#include <string>

using namespace std;
int main(){
    string nomeOperador;
    float vel_permitida, vel_registrada, excesso_velocidade;
    cout << "Digite o nome do operador do veículo industrial: " << endl;
    cin >> nomeOperador;
    cout << "Digite a velocidade permitida da área operacional: " << endl;
    cin >> vel_permitida;
    cout << "Digite a velocidade registrada do veículo: " << endl;
    cin >> vel_registrada;
    excesso_velocidade = vel_registrada - vel_permitida;
    if (excesso_velocidade <= 0){
        cout << "OPERAÇÃO NORMAL" << endl;
    } else if (excesso_velocidade > 0 && excesso_velocidade <= 10){
        cout << "ALERTA OPERACIONAL" << endl;
    } else if (excesso_velocidade > 10 && excesso_velocidade <= 20){
        cout << "INFRAÇÃO GRAVE" << endl;
    } else {
        cout << "RISCO CRÍTICO" << endl;
    }

}

