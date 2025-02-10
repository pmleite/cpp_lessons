#include <iostream>
#include <string>

using namespace std;

int main(){
    string frutas [5] = {"banana","laranja","abacaxi","melancia","pera"};
    int acertos = 0;
    int i = 0;

    while(i < 5){
        string resposta;
    cout << "Qual é o nome desta fruta?\n " << frutas[i][0] << "_____? " << endl;
    cin >> resposta;
    system("clear");

    if (resposta == (frutas[i])){
        cout << "Parabens!" << endl;
        acertos++;
   
    } else {
        cout << "Erraste era " << frutas[i] << "! " << endl;

    }
    i++;
    {
        cout << "Acertaste " << acertos << " Das 5 frutas até agora." << endl;
    }



    }

return 0;
}