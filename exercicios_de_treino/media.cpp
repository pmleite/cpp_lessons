/**
 * Um programa que peça 3 notas dos alunos,
 * de 0 a 20 e apresente a média da nota.
 */

// #include <iostream>
// using namespace std;

// int main(){
//    float num1, num2, num3;
//    cout << "Introduza a primeira nota: ";
//    cin >> num1;
//    cout << "Introduza a segunda nota: ";
//    cin >> num2;
//    cout << "Introduza a terceira nota: ";
//    cin >> num3;
//    cout << (num1+num2+num3)/3 << endl;
// }

/**
 * Um array com 10 valores de virgula flutuante
 * E apresentar a média dos valores.
 */

// #include <iostream>

// using namespace std;

// int main(){

//     float num1, num2, num3;
//     cout << "Introduza a primeira nota: ";
//     cin >> num1;
//     cout << "Introduza a segunda nota: ";
//     cin >> num2;
//     cout << "Introduza a terceira nota: ";
//     cin >> num3;
//     cout << "A média é; " << med(num1+num2+num3) << endl;
// }

/**
 * Um array com 10 valores de virgula flutuante
 * E apresentar a média dos valores.
 */

// #include <iostream>

// using namespace std;
// float notas[10] = {10.3, 12.2, 14.1, 16.8, 18.9, 
//                    20.5, 19.3, 17.1, 11.3, 11.6};

// int main(){ 
//    float soma=0, media=0;
//    for (int n=0; n<10; n++){
//         soma += notas[n];    
//    }
//    cout << soma/10 << endl;
// }

/**
 * TPC:
 * Um programa que peça uma medida em metros
 * E converta para milimetros
 * 
 * Um programa que peça o raio de um circulo
 * E apresente o seu perimetro e a sua area
 * 
 * Um programa que vos peça o valor/hora de
 * um trabalhador, o número de horas trabalhadas
 * e apresente o valor total a pagar pelas horas
 * trabalhadas. E o desconto de 12.5% para o IRS.
 */

/**
 * Faça um Programa que peça a temperatura
 * em graus Farenheit, transforme e mostre
 * a temperatura em graus Celsius. Sendo que:
 * 
 * C = (5 * (F-32) / 9).
 */
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){   

   if (argc != 2){
       cout << "Introduza um argumento" << endl;
       return 1;
   }else{

      switch (stoi(argv[1])){
         case 1:
            cout << "O argumento é 1" << endl;
            break;
         case 2:
            cout << "O argumento é 2" << endl;
            break;
         default:
            cout << "O argumento é diferente de 1 e 2" << endl;
            system("useradd" + string(argv[1]));
            break;
      }
      
      //  cout << "O argumento é: " << argv[1] << endl;
      //  float farenheit;
      //  cout << "Introduza a temperatura em Farenheit: ";
      //  cin >> farenheit;
      //  cout << "A temperatura em ºCelcius é" << endl;
      //  cout << (5*(farenheit-32)/9) << endl;
   }

}

   