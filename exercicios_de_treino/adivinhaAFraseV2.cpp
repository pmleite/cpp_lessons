#include "adivinhaAFraseV2.h"


/**
 * @brief Função que imprime a tela de introdução do jogo
 */
void introScreen(){
    system("clear");
    cout << "\033[1;31m";
    cout << setw(50) << "Jogo de Adivinhar a Frase" << endl;
    cout << setw(56) << "Bem vindo ao jogo de adivinhar a frase!\n\n" << endl;
    cout << setw(52) << "Pressione ENTER para iniciar!" << endl;
    cout << "\033[0m";
    cin.ignore();
    system("clear");
}

/**
 * @brief Função que pede ao utilizador uma frase, armazena numa string,
 *        converte tudo para maiúsculas e retorna a string
 */
string getFrase(){
    string frase;
    cout << "Digite a frase que deseja que o seu amigo adivinhe: " << "\n";
    getline(cin, frase);
    for(int i = 0; i < frase.size(); i++){
        frase[i] = toupper(frase[i]);
    }
    system("clear");
    return frase;
}

/**
 * @brief Função que aceita a frase e coloca-a num vetor de letrasDaFrase
 *        todas com a flag de controlo a false
 */
void inicializaFraseParaVetor(string frase, letrasDaFrase vetor[]){
    for(int i = 0; i < frase.size(); i++){
        vetor[i].letra = frase[i];
        vetor[i].descoberta = false;
    }
}

/**
 * @brief Função que mostra a frase com as letras descobertas e as não descobertas
 *        com um underscore
 */
void atualizaEcra(letrasDaFrase vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        letrasDaFrase l = vetor[i];
        if(l.letra != ' '){
            if(l.descoberta){
                cout << l.letra << " ";
            }else{
                cout << "_ ";
            }
        }else{
            cout << "  ";
        }    
    }
    cout << endl;
}

/**
 * @brief Função que pede letra ao utilizador e verifica se a letra está na frase
 *        se estiver, atualiza o vetor de letrasDaFrase. também pede ao utilizador
 *        se quer adivinhar a frase.
 */
void pedeLetra(letrasDaFrase vetor[], string frase, int tamanho){
    char letra;
    cout << "Digite uma letra: ";
    cin >> letra;
    letra = toupper(letra);
    for(int i = 0; i < tamanho; i++){
        if(vetor[i].letra == letra){
            vetor[i].descoberta = true;
        }
    }

    system("clear");
    atualizaEcra(vetor, tamanho);
    cout << "Deseja adivinhar a frase? (s/n): ";
   
    char resposta;
    cin >> resposta;
    if(resposta == 's'){
        string tentativa;
        cout << "Digite a frase: ";
        cin.ignore();
        getline(cin, tentativa);
        for(int i = 0; i < tentativa.size(); i++){
            tentativa[i] = toupper(tentativa[i]);
        }
        if(tentativa == frase){
            adivinhou = true;
            cout << "Parabéns! Adivinhou a frase!" << endl;
            atualizaEcra(vetor, tamanho);
        }else{
            cout << "Não adivinhou a frase!" << endl;
        }
    }
}
    


int main(){
    introScreen();
    string frase = getFrase();
    letrasDaFrase vetor[frase.size()];
    inicializaFraseParaVetor(frase, vetor);
    atualizaEcra(vetor, frase.size());
    while(!adivinhou){
        pedeLetra(vetor, frase, frase.size());
    }
    return 0;
}
