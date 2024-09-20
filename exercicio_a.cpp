#include <iostream>
#include <string>
using namespace std;

// Definição da struct Produto
struct Produto {
    string nome;
    float preco;
    int quantidade;
};

// Função para adicionar um novo produto
void adicionarProduto(Produto produtos[], int& quantidadeAtual) {
    
    if (quantidadeAtual >= 100) {
        cout << "Limite de produtos atingido." << endl;
        return;
    }
    
    Produto novoProduto;
    cout << "Nome do produto: ";
    cin.ignore();  // Limpar o buffer do teclado
   
    getline(cin, novoProduto.nome);
    cout << "Preço do produto: ";
    cin >> novoProduto.preco;
    cout << "Quantidade do produto: ";
    cin >> novoProduto.quantidade;

    produtos[quantidadeAtual] = novoProduto;
    quantidadeAtual++;
}

// Função para exibir todos os produtos
void exibirProdutos(const Produto produtos[], int quantidadeAtual) {
   
    if (quantidadeAtual == 0) {
        cout << "Não há produtos registados." << endl;
        return;
    }

    for (int i = 0; i < quantidadeAtual; i++) {
        cout << "Produto " << i + 1 << ": " << endl;
        cout << "Nome: " << produtos[i].nome << endl;
        cout << "Preço: " << produtos[i].preco << endl;
        cout << "Quantidade: " << produtos[i].quantidade << endl;
        cout << "----------------------" << endl;
    }
}

// Função para calcular o valor total do stock
float calcularValorTotal(const Produto produtos[], int quantidadeAtual) {
    float valorTotal = 0.0;
    for (int i = 0; i < quantidadeAtual; i++) {
        valorTotal += produtos[i].preco * produtos[i].quantidade;
    }
    return valorTotal;
}

int main() {
   
    Produto produtos[100];  // Limite de 100 produtos
   
    int quantidadeAtual = 0;
    int opcao;

    do {
        cout << "1. Adicionar Produto" << endl;
        cout << "2. Exibir Produtos" << endl;
        cout << "3. Calcular Valor Total do Stock" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarProduto(produtos, quantidadeAtual);
                break;
            case 2:
                exibirProdutos(produtos, quantidadeAtual);
                break;
            case 3:
                cout << "Valor total do stock: " << calcularValorTotal(produtos, quantidadeAtual) << " EUR" << endl;
                break;
            case 0:
                cout << "A sair..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while (opcao != 0);

    return 0;
}
