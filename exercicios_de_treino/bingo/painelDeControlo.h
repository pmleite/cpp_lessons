#include <iostream>
#include <iomanip>
#include <vector>

#define NUM_BOLAS_SORTEIO    90
#define NUM_COLUNAS_PAINEL   NUM_BOLAS_SORTEIO/5
#define DEFAULT_BALL_STATE   false
#define PANEL_NUMBER_WIDTH   3

#define VERDE       "\033[1;32m"
#define VERMELHO    "\033[1;31m"
#define AZUL        "\033[1;34m"
#define AMARELO     "\033[1;33m"
#define BRANCO      "\033[1;37m"
#define RESET       "\033[0m"


using namespace std;

class PainelDeControlo{
    
    private:
        
        struct bola{
            int  numero;
            bool sorteada;
            char letra;
        };

        vector<int> bolasSaidas;
        vector<bola> bolas; 

        void printHeader(){
            system("clear");
            printf("%s", "                                                 JOGO DO BINGO\n");
            printf("%s", "                                              Painel de Controlo\n");
            printf("%s", "------------------------------------------------------------------------------------------------------------\n\n");
        }

    public:

        PainelDeControlo(){
            for(int i = 0; i < NUM_BOLAS_SORTEIO; i++){
                bola bolaBingo;
                bolaBingo.numero = i + 1;
                bolaBingo.sorteada = DEFAULT_BALL_STATE;
                    if(i < NUM_COLUNAS_PAINEL){
                        bolaBingo.letra = 'B';
                    }else if (i < NUM_COLUNAS_PAINEL*2){
                        bolaBingo.letra = 'I';
                    }else if (i < NUM_COLUNAS_PAINEL*3){
                        bolaBingo.letra = 'N';
                    }else if (i < NUM_COLUNAS_PAINEL*4){
                        bolaBingo.letra = 'G';
                    }else{
                        bolaBingo.letra = 'O';
                    }
                bolas.push_back(bolaBingo);             
            }
        }


        void updatePanel(){
            
            printHeader();
            
            for( bola b : bolas){  
                if(b.sorteada){
                    if(b.numero < 10){
                        cout << VERMELHO << setw(PANEL_NUMBER_WIDTH) << b.letra << "-0" << b.numero << RESET;
                    }else{
                        cout << VERMELHO << setw(PANEL_NUMBER_WIDTH) << b.letra << "-" << b.numero << RESET;
                    }
                }else{
                    if(b.numero < 10){
                        cout << VERDE << setw(PANEL_NUMBER_WIDTH) << b.letra <<  "-0" << b.numero;
                    }else{
                        cout << VERDE << setw(PANEL_NUMBER_WIDTH) << b.letra <<  "-" << b.numero;
                    }
                }
                if(b.numero % (NUM_COLUNAS_PAINEL) == 0){
                    cout << "\n";
                } 
            }
            cout << RESET << endl;
            printf("%s", "------------------------------------------------------------------------------------------------------------\n");
        }

    void sortearBola(){
        int bolaSorteada = rand() % NUM_BOLAS_SORTEIO + 1;
        bolas[bolaSorteada - 1].sorteada = true;
        bolasSaidas.push_back(bolaSorteada);
    }


        
};
