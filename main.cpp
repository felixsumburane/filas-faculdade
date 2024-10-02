#include <iostream>
#include <list>

int main() {
    // Criar uma lista de inteiros
    std::list<int> minhaLista;

    // Atribuir valores à lista
    minhaLista.push_back(10);
    minhaLista.push_back(20);
    minhaLista.push_back(30);
    minhaLista.push_back(40);
    minhaLista.push_back(50);
    
    // Remover o primeiro elemento
    minhaLista.pop_front();

    // Exibir os valores da lista
    std::cout << "Os valores da lista são: ";
    for (int valor : minhaLista) {
        std::cout << valor << " "; // Exibe cada valor
    }

    std::cout << std::endl;

    return 0;
}
