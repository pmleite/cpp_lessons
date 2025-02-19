#include <iostream>
#include <vector>

using namespace std;

void BubleSort(vector<string>& names){
    for(int x = 0; x < names.size(); x++){
        for(int z = 0; z < names.size() - 1 - x; z++){
            if(names[z] > names[z+1]){
                swap(names[z], names[z+1]);
            }
        }
    }
}

int main(){
    int n;

    cout << "quantos nome deseja? ";
    cin >> n;

    vector <string> names(n);

    cout << "Digite " << n << " nomes" <<endl;
        for(int i = 0; i < n; i++){
            cin >> names[i];
        }

    BubleSort(names);

    cout << "A ordem correta é: " <<endl;
        for(const string& nomes : names){
            cout << nomes << endl;
        }

    return 0;
}