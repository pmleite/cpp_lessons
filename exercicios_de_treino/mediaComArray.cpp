#include <iostream>
using namespace std;

int main() {
    system("clear");
    
    int n;
    cout << "Digite a quantidade de alunos: ";
    cin >> n;
    
    float notas[n];
    float soma = 0;
   
    for (int i = 0; i < n; i++) {
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        soma += notas[i];
    }
   
    cout << soma / n << endl;
    return 0;
}