#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Use a hora atual como semente para o gerador de números aleatórios
    int numero_secreto = std::rand() % 100 + 1; // Gera um número aleatório entre 1 e 100
    int palpite;
    int tentativas = 0;

    std::cout << "Bem-vindo ao jogo de adivinhacao!" << std::endl;
    std::cout << "Tente adivinhar o numero entre 1 e 100." << std::endl;

    do {
        std::cout << "Digite o seu palpite: ";
        std::cin >> palpite;
        tentativas++;

        if (palpite < numero_secreto) {
            std::cout << "Muito baixo! Tente novamente." << std::endl;
        } else if (palpite > numero_secreto) {
            std::cout << "Muito alto! Tente novamente." << std::endl;
        } else {
            std::cout << "Parabens! Voce adivinhou o numero em " << tentativas << " tentativas." << std::endl;
        }
    } while (palpite != numero_secreto);

    return 0;
}

