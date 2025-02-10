#include <iostream>

using namespace std;

string phrase;
char guessCharacter;

void writePhrase(){
    cout << "Type a text to be guessed: ";
    getline(cin, phrase);
}

string hideText(const string& text){
    string hiddentext = text;
    for(char &c : hiddentext){
        if(c != ' '){
            c = '_';
        }
    }
    return hiddentext;
}

string updateHiddenText(string &hiddentext, char guess){
    for(size_t i = 0; i < phrase.size(); i++){
        if(guess == phrase[i]){
            hiddentext[i] = guess;
        }
    }
    return hiddentext;
}

void guessPhrase(){
    string hiddenText = hideText(phrase);
    do{
        cout << hiddenText << endl;

        cout << "Guess a character: ";
        cin >> guessCharacter;

        updateHiddenText(hiddenText, guessCharacter);

    }while(hiddenText != phrase);

    cout << "Congrats you won !\n";
}

int main(){
    writePhrase();
    guessPhrase();
    return 0;
}