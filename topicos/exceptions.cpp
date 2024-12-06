/**
 * Abrir um ficheiros que não existe
 * utilizando o try catch
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(){  
    while(true){
        try{
            //system("clear");
            cout << "Digite o nome do ficheiro: ";
            string nomeFicheiro;
            cin >> nomeFicheiro;

            ifstream file(nomeFicheiro);
            if(!file.is_open()){
                throw "1";
            }
            throw "O";
        }catch(const char *e){
            if(e[0] == '1'){
                cout << "Erro ao abrir o ficheiro" << endl;
            }else{
                cout << "Ficheiro aberto com sucesso" << endl;
                break;
            }
            
        }
    }

    cout << "Fim do programa" << endl;
    return 0;
}
