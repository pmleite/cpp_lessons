#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace chrono;

int main(){
    system("clear");
    cout << "O cronómetro vai começar em" << endl;

    for(int i = 3; i > 0; i--){
        cout << i << "..." << endl;
        this_thread::sleep_for(seconds(1));
    }

    system("clear");
    cout << "Cronómetro iniciado!" << endl;

    auto inicio = high_resolution_clock::now();
    cout << "Pressione ENTER para parar o cronómetro!" << endl;
    cin.get();

    auto fim = high_resolution_clock::now();
    auto duracao = duration_cast<milliseconds>(fim - inicio);

    long long totalMilissegundos = duracao.count();
    int horas = totalMilissegundos / 3600000;
    int minutos = (totalMilissegundos % 3600000) / 60000;
    int segundos = (totalMilissegundos % 60000) / 1000;
    int milissegundos = totalMilissegundos % 1000;

    printf("\n%2d:%02d:%02d:%03d\n", horas, minutos, segundos, milissegundos);

    return 0;
}