/* Classe matemática entra com dois dados e soma, multiplica, subtrai e divide */
#include <iostream>
using namespace std;

class Matematica {
private:
    int A, B;

public:
    void entradaDeDados() {
        cout << "Digite o valor de A: ";
        cin >> A;
        cout << "Digite o valor de B: ";
        cin >> B;
    }

    int soma() {
        return A + B;
    }

    int subtracao() {
        return A - B;
    }

    int multiplicacao() {
        return A * B;
    }

    float divisao() {
        if (B == 0) {
            cout << "Erro: Divisão por zero!" << endl;
            return 0;
        }
        return static_cast<float>(A) / B;
    }
};


int main() {
    Matematica calc;

    calc.entradaDeDados();

    cout << "Soma: " << calc.soma() << endl;
    cout << "Subtração: " << calc.subtracao() << endl;
    cout << "Multiplicação: " << calc.multiplicacao() << endl;
    cout << "Divisão: " << calc.divisao() << endl;

    return 0;
}
