#include <iostream>

using namespace std;

int main(){
    int x;
    cout << "indique o numero inicial: ";   
    cin >> x;
    if (x<=0) cout << "Numero inválido! Bye....";
    else for (int i=x; i>=0; i--) cout << " Num: " << i << "\n";
    return 0;
}