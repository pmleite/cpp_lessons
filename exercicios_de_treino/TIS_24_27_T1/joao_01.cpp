#include <iostream>

using namespace std;

int main(){

    string picarets[4] = {"madeira", "pedra", "ferro", "diamante"};

    cout << "1. madeira" << endl;
    cout << "2. pedra" << endl;
    cout << "3. ferro" << endl;
    cout << "4. diamante" << endl;
    cout << "qual é a picareta que devemos usar para recolher um bloco de obsidian?" << endl;
    cout << "-";

    string escolha;
    cin >> escolha;

    if(escolha == "diamante"){
        cout << "muito bem, acertaste" << endl;
    }else if(escolha == "madeira" || escolha == "pedra" || escolha == "ferro"){
        cout << "não podes pegar um bloco de obsidian com essa picareta" << endl;
    }else{
        cout << "essa picareta não existe" << endl;
    }
    return 0;
}