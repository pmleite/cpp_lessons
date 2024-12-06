#include <iostream>

using namespace std;

int main(){
system("clear");

    for (int x=0; x<=10; x++){ 
        if (x == 5){
            cout << x << " Antes do continue" << endl;
            continue;
            cout << x << " Depois do continue" << endl;
        }
        cout << x << " Hello, World!" << endl;   
    }
}