#include <iostream>

using namespace std;

string converter(int num, int base){
    string result = "";
    const char CHARACTERS[] = "0123456789ABCDEF";

    while(num > 0){
        int remain = num % base;
        result = CHARACTERS[remain] + result;
        num /= base;
    }
    return result;
}

void converterInfo(){
    int number;
    cout << "Type a number: ";
    cin >> number;

    cout << "Binary: " << converter(number, 2) << endl;    
    cout << "Octal: " << converter(number, 8) << endl;
    cout << "Decimal: " << converter(number, 10) << endl;
    cout << "Hexadecimal: " << converter(number, 16) << endl;
}

int main(){
    converterInfo();
    return 0;
}