#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int aliatorio;
int main(){
    struct livro{
        string nome;
        int numero;
        string tipo;
    };
srand(time(0));
for(int i = 0; i < 1; i++)
aliatorio = rand() % 3;
livro livros[3];
livros[0] = {"O Gui e a fema",343,"romance"};
livros[1] = {"O Tadeu e a fema",351,"romance"};
livros[2] = {"Carros 1",231,"corrida"};
cout << "________________________" << endl;
cout << "O livro escolhido foi: " << endl;
cout << livros[aliatorio].nome << endl;
cout << livros[aliatorio].numero << endl;
cout << livros[aliatorio].tipo << endl;
cout <<"_________________________" << endl;

}