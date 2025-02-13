#include <iostream>

using namespace std;

int loop = 1;
char Guess;
struct letrasFR{
    char letra;
    bool letCTRL;
};

letrasFR Letras[] = {
                    {'a',false},
                    {'b',false},
                    {'c',false},
                    {'d',false},
                    {'e',false},
                    {'f',false},
                    {'g',false},
                    {'h',false},
                    {'i',false},
                    {'j',false},
                    {'k',false},
                    {'l',false},
                    {'m',false},
                    {'n',false},
                    {'o',false},
                    {'p',false},
                    {'q',false},
                    {'r',false},
                    {'s',false},
                    {'t',false},
                    {'u',false},
                    {'v',false},
                    {'w',false},
                    {'x',false},
                    {'y',false},
                    {'z',false},
};

string frase;

int main(){

cout << "Digite uma frase: ";
    getline(cin, frase);

    system ("clear");

    for (char l : frase){
        l != ' ' ? cout << "_ " : cout << "  ";} cout << endl << endl;

//start
while (loop > 0){loop = 0;

cout << "Take your guess: ";
cin >> Guess;

    for (int t = 0; t < 26; t++){

    Letras[t].letCTRL;
    if (Guess == Letras[t].letra){ Letras[t].letCTRL = true;}
    }

system ("clear");

   for (char l : frase){
    if (l == ' '){cout << "  ";}
    

    for (int t = 0; t < 26; t++){

    if (l == Letras[t].letra){if (Letras[t].letCTRL == true){
       l != ' ' ? cout << l : cout << "  ";}else {loop++; l == ' ' ? cout << "  " : cout << "_ ";}
         }
     }

    }cout << endl << endl;

    }

    system ("clear");

    cout << frase << endl << endl << "YOU WIN!!" << endl << endl;
}