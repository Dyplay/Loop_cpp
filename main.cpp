#include <iostream>

int main() {
    for (int i = 0; i < 5; i++)
        std::cout << i << std::endl;

    int i = 0;
    while (i < 5) {
        std::cout << i << std::endl;
        i++;
    }

    i = 0;
    do {
        std::cout << i << std::endl;
        i++;
    } while (i < 5);

    int numbers[] = { 1, 2, 3};
    for (int number: numbers)
        std::cout << number << std::endl;
}