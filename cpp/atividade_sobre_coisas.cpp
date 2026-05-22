/*
 🎯 Objetivo
Desenvolver um programa em C++ utilizando:

variáveis;
entrada e saída de dados;
operadores matemáticos;
estruturas condicionais.
📝 ENUNCIADO
Crie um programa em C++ que:

1️⃣ Solicite:

nome do motorista - feito;
velocidade permitida da via - feito;
velocidade do veículo - feito.
2️⃣ Calcule:

diferença entre velocidade do veículo e velocidade permitida.
3️⃣ Mostre:

nome do motorista;
velocidade permitida;
velocidade do veículo;
excesso de velocidade.
4️⃣ Informe a situação do motorista:

📌 REGRAS
🔹 Se:
velocidade ≤ permitida → DENTRO DO LIMITE
velocidade até 10 km/h acima → MULTA LEVE
velocidade entre 11 e 20 km/h acima → MULTA GRAVE
velocidade acima de 20 km/h → MULTA GRAVÍSSIMA
⚠️ O programa deve utilizar obrigatoriamente:
✔ #include <iostream>
✔ int main()
✔ variáveis
✔ operadores matemáticos
✔ if / else if / else / switch
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    string nome;
    float velocidade_permitida, velocidade_veiculo, excesso_velocidade;
    cout << "Digite seu nome, motorista: " << endl;
    getline(cin, nome);
    cout << "Digite a velocidade permitida da via: " << endl;
    cin >> velocidade_permitida;
    cout << "Digite a velocidade do veículo: " << endl;
    cin >> velocidade_veiculo;
    excesso_velocidade = velocidade_veiculo - velocidade_permitida;
    cout << "============ RECIBO ============" << endl;
    cout << "Nome do motorista: " << nome << endl;
    cout << "Velocidade permitida: " << velocidade_permitida << " km/h" << endl;
    cout << "velocidade do veiculo: " << velocidade_veiculo << " km/h" << endl;
    cout << "Excesso de velocidade: " << excesso_velocidade << " km/h" << endl;
    cout << "================================" << endl;
    if (velocidade_veiculo <= velocidade_permitida){
        cout << "Situação do motorista: DENTRO DO LIMITE" << endl;
    } else if (excesso_velocidade > 0 && excesso_velocidade <= 10){
        cout << "Situação do motorista: MULTA LEVE" << endl;
    } else if (excesso_velocidade > 10 && excesso_velocidade <= 20){
        cout << "Situação do motorista: MULTA GRAVE" << endl;
    } else if (excesso_velocidade > 20){
        cout << "Situação do motorista: MULTA GRAVÍSSIMA" << endl;
        
    }
    
}
