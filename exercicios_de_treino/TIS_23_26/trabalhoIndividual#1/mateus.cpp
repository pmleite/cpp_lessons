#include <iostream>
using namespace std;



class JogoAdivinha{
    private:
        int num_secreto;
    public:
        JogoAdivinha(){
            num_secreto = rand() % 100 + 1;
        };

        void jogar(){
            int palpite;
            cout << "Escolhe um número até 100" << endl;

            do{
                cout << "Escreve o teu palpite " << endl;
                cin >> palpite;

                if(palpite > 100){
                    cout << "O limite é 100!" << endl;
                    cout << "Vai, tenta novamente!" << endl;
                };
                if(palpite < 0){
                    cout << "O sorteio vai de 1 a 100!" << endl;
                    cout << "Vai, tenta novamente!" << endl;
                };
                if(palpite > num_secreto){
                    cout << "O número é menor!" << endl;
                    cout << "Tenta de novo!" << endl;
                };
                if(palpite < num_secreto){
                    cout << "O número é maior!" << endl;
                    cout << "Tenta de novo!" << endl;
                };
                if(palpite == num_secreto){
                    cout << "Parabéns, acertaste!" << endl;
                };    
            }while(palpite != num_secreto);
        }
};

int main(){
    system("clear");
    srand(time(0));

    JogoAdivinha Jogo1;
    Jogo1.jogar();

    return 0;

}