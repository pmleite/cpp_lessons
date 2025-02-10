 #include <iostream>
 
 using namespace std;

 int main(){

    const int NUMEROS = 5;
    int num[NUMEROS], min, max, sum = 0;

cout << "Digite " << NUMEROS << " números";
for (int i = 0; NUMEROS < i; i++) {
cout << "Número " << i + 1 << endl;
cin >> num[i];
sum =+ num[i]; }

for(int i = 0; NUMEROS < i; i++){
if(num[i] < max) max = num[i]; 
if(num[i] > min) min = num[i];

}

cout << "" << endl;
cout << "O maior número: " << max << endl;
cout << "O menor número: " << min << endl;
cout << "A média dos números: " << sum/NUMEROS << endl;
cout << "" << endl;
   
  
    return 0;
 }