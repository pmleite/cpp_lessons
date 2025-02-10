#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

string prefixo[] = {"John", "Lord"};
string sufixo[] = {"_240Hz", "_165Hz"};

int numPrefixo = sizeof(prefixo) / sizeof(prefixo[0]);
int numSufixo = sizeof(sufixo) / sizeof(sufixo[0]);

srand(time(0));

int indiceprefixo = srand(numPrefixo) % prefixo[0];
int indicesufixo = srand(numSufixo) % sufixo[0];

string nickname = indiceprefixo + indicesufixo;

cout << 










}