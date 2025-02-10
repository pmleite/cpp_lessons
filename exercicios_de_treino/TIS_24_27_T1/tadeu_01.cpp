 #include <iostream>
 #include <cstdlib>
 #include <ctime>

using namespace std;

 int main(){
    cout << "---Slot---";
    float aposta;
    cout << "\nDigite o valor que deseja apostar: ";
    cin >> aposta;

srand(time(0));
    for(int tenta  = 1; tenta <= 3; tenta++){
        int x;
        cin.ignore();

        cout << "\nTentiva: " << tenta << " de 3.\n";

        int num = rand() % 100 , num2 = rand() % 100, num3 = rand() % 100;

        cout << num << " | " << num2 << " | " << num3 << endl;

        if(num == num2 && num2 == num3){
            cout << "Ganhaste 5x mais do que apostaste";
            cout << "Ganho: " << aposta * 5 << "Euros.\n";
        }else{cout << "Perdeste Tenta denovo";}
    }
 }