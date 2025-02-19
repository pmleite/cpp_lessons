#include <iostream>

using namespace std;

int main(){
int numSorte = 1+(rand()%100);
int num = 0;
srand((unsigned)time(0));
while(numSorte != num){
    cout << "Qual numero da sorte " << endl;
    cin >> num;
    if (numSorte >num){
    cout <<"Numero da sorte é maior " << num << endl;
    }else if (numSorte < num){
    cout <<"Numero da sorte é menor " << num << endl;
    }else{
        cout <<"Parabens ganhaste" <<endl;
    }

}
}