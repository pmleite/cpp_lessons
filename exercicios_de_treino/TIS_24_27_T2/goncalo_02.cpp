#include <iostream>
using namespace std;

int main(){

    string jogadores [5]={"neymar","messi","ronaldo","mbappe","salah"};
    string equipas [5]={"al-hilal","inter maiami","al-nassr","real","liverpool"};
    int idades[5]= {32,37,39,25,32};

    cout<<"jogadores\tidades\tequipas"<<endl;

    cout<<"aqui";
    
    for(int i=0;i<5;i++){
        cout<<jogadores[i]<<"\t\t"<<idades[i]<<"\t"<<equipas[i]<<endl;      
    }

}