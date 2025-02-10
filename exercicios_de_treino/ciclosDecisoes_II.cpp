#include <iostream>

using namespace std;

struct morseLetter{
    char letter;
    string code;
};

morseLetter morseAlphabet[] = {
    {'A', ".-"},
    {'B', "-..."},
    {'C', "-.-."},
    {'D', "-.."},
    {'E', "."},
    {'F', "..-."},
    {'G', "--."},
    {'H', "...."},
    {'I', ".."},
    {'J', ".---"},
    {'K', "-.-"},
    {'L', ".-.."},
    {'M', "--"},
    {'N', "-."},
    {'O', "---"},
    {'P', ".--."},
    {'Q', "--.-"},
    {'R', ".-."},
    {'S', "..."},
    {'T', "-"},
    {'U', "..-"},
    {'V', "...-"},
    {'W', ".--"},
    {'X', "-..-"},
    {'Y', "-.--"},
    {'Z', "--.."},
    {' ', " "}  // espaço
};

string frase = "VAMOS POR ISSO EM MORSE CODE";

int main(){

    system("clear");
    cout << "Frase: " << frase << "\n";
    cout << "Morse: \n";

    for( char l : frase){
        for (morseLetter m : morseAlphabet){
            l == m.letter ? cout << m.code << " " : 
                            cout << "";
        }
    }
    cout << "\n";   


    return 0;
}