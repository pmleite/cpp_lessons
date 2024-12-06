/**
 * Programa para pedir ao utilizador
 * um número e apresentar, posteriormente,
 * este número no terminal.
 */

#include <iostream>
   
int numero;

int main(){
   
    std::cout << "Introduza um número: ";
    std::cin  >> numero;
    std::cout << "O número introduzido foi: " 
              << numero << std::endl;
}

