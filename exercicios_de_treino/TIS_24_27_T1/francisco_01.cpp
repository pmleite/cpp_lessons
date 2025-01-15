#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int win = 0;

int const maxtries = 5;

string Number[14] = {"Joker","Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
string Suit[5] = {""," of Hearts"," of Spades"," of Diamonds"," of Clubs"};

int numguessC;
int suitguessC;

int numguessU;
int suitguessU;

int main(){

    cout << endl << "Greetings, I will be the dealer for this simple game, rules are simple..." << endl << "You will have 5 tries to guess the number and suit of a random card from my deck." << endl << endl;
    cout << "Numbers: 1(Ace), 2, 3, 4, 5, 6, 7, 8, 9, 10, 11(Jack), 12(Queen), 13(King)." << endl;
    cout << "Suits: 1 -Hearts, 2 -Spades, 3 -Diamonds, 4 -Clubs;" << endl << endl;

    int triesleft = maxtries;

    srand(time(0));
     numguessC = rand() % 13 + 1;
     suitguessC = rand() % 4 + 1;

        //cout << numguessC << "   " << suitguessC << endl << endl;

    while (win < 1){
        
        if (triesleft == 0){
            cout << "Looks like you ran out of tries" << endl << endl << "Get Out." << endl << endl << "GAME OVER" << endl << endl;
            return 0;
        };
        
        if (triesleft == 1){ cout << "Last Try." << endl << endl;
        }else {cout << triesleft << " tries left" << endl << endl;};

        cout << "Number: ";
        cin >> numguessU;
        cout << "Suit: ";
        cin >> suitguessU;

        if (numguessU > 13){cout << endl << "Your guess is invalid, give me something plausible" << endl << endl;
        }else if (suitguessU > 4){cout << endl << "Your guess is invalid, give me something plausible" << endl << endl;
        }else if (numguessU < 1) {cout << endl <<"Your guess is invalid, give me something plausible" << endl << endl;
        }else if (suitguessU < 1) {cout << endl <<"Your guess is invalid, give me something plausible" << endl << endl;
        }else {cout << endl << "Your guess is " << Number[numguessU] << Suit[suitguessU] << "..." << endl << endl;}

        if (numguessC == numguessU){
            if (suitguessC == suitguessU){
                cout << "..." << endl << endl;
                win++;
            }else{ cout << "Right number, wrong suit." << endl << endl;}
        }else if (suitguessC == suitguessU){ cout << "Right suit, wrong number." << endl << endl;
        }else {cout << "Wrong." << endl << endl;};

        triesleft--;
    }

    cout << "Congrats, " << Number[numguessU] << Suit[suitguessU] << " is correct." << endl << endl;

    return 0;
}