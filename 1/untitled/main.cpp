#include <iostream>
#include <random>

int game(int);

int main() {
    int guesscount = game(20);
    std::cout << "Yritit " << guesscount << " kertaa" << std::endl;
    return 0;
}

int game(int maxnum) {
    std::random_device rd;
    maxnum = maxnum++;
    int x = rd() % maxnum;
    int guess;
    int guesscount = 0;
    std::cout << "Arvaa luku" << std::endl;
    while (true) {
        //std::cin >> guess;
        if (!(std::cin >> guess)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Vain numero kelpaa!" << std::endl;
            continue;
        }
        if (guess == x) {
            guesscount++;
            std::cout << "Oikein" << std::endl;
            break;
        } else if (guess < x) {
            guesscount++;
            std::cout << "Liian pieni, yritä uudestaan" << std::endl;
        } else if (guess > x) {
            guesscount++;
            std::cout << "Liian iso, yritä uudestaan" << std::endl;
        } else {
            std::cout << "Something went wrong" << std::endl;
            break;
        }
    }
    return guesscount;
}

