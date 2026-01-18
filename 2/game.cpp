#include "game.h"
#include <iostream>
#include <random>
#include <limits>

Game::Game(int max) {
    maxNumber = max;
    numOfGuesses = 0;
    playerGuess = 0;
    std::random_device rd;
    randomNumber = (rd() % maxNumber) + 1;
    std::cout << "Constructor, maxNumber is " << maxNumber << std::endl;
}

Game::~Game() {
    std::cout << "Destructor" << std::endl;
}

void Game::play() {
    std::cout << "Arvaa luku" << std::endl;
    while (true) {
        if (!(std::cin >> playerGuess)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Vain numero kelpaa" << std::endl;
            continue;
        }
        numOfGuesses++;
        if (playerGuess == randomNumber) {
            std::cout << "Oikein" << std::endl;
            printGameResult();
            break;
        } else if (playerGuess < randomNumber) {
            std::cout << "Liian pieni, yritä uudestaan" << std::endl;
        } else {
            std::cout << "Liian iso, yritä uudestaan" << std::endl;
        }
    }
}

void Game::printGameResult() {
    std::cout << "Oikea vastaus: " << randomNumber << std::endl;
    std::cout << "Arvasit " << numOfGuesses << " kertaa" << std::endl;
}
