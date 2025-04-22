#include "vamosJogarBingo.h"
#include <unistd.h>

using namespace std;

int main(){
 
    PainelDeControlo painel;
    
    painel.updatePanel();

    //Sorteia uma bola por cada segundo
    for(int i = 0; i < NUM_BOLAS_SORTEIO; i++){
        painel.sortearBola();
        painel.updatePanel();
        sleep(0.5);
    }


    return 0;
}


