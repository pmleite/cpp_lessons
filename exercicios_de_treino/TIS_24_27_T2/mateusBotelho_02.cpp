#include<iostream>

using namespace std;

    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int linha[10] = {1,2,3,4,5,6,7,8,9,10};

int main(){

    srand(time(0));

    int numero = rand() % 5;
    int letra = rand() % 5;

    char x;
    int y;

    char barco_coluna = coluna[letra];
    int barco_linha = linha[numero];


    while(true){

        cout<<"Tente adivinhar a coluna que está o barco: ";
        cin >> x;
        cout<<"Tente adivinhar a linha que está o barco: ";
        cin >> y;


        if(x==barco_coluna && y==barco_linha){
            cout<<"Acertaste o barco"<<endl;
            break;
        }else if(x==barco_coluna){
            cout<<"Acertaste só a coluna tente adivinhar a linha"<<endl;
        }else if(y==barco_linha){
            cout<<"Acertaste só a linha tente adivinhar a coluna"<<endl;
        }else{
            cout<<"Nao acertaste nada"<<endl;
        }
    }
}