#include <iostream>

int main() {
    int x = 5;
    int y = 3;

    // Instrukcja warunkowa if-else
    if (x > y) {
        std::cout << "x jest większe od y" << std::endl;
    } else {
        std::cout << "x jest mniejsze lub równe y" << std::endl;
    }

    // Pętla for
    for (int i = 0; i < 5; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Operatory arytmetyczne
    int sum = x + y;
    int difference = x - y;
    int product = x * y;
    int quotient = x / y;
    int remainder = x % y;

    std::cout << "Suma: " << sum << std::endl;
    std::cout << "Różnica: " << difference << std::endl;
    std::cout << "Iloczyn: " << product << std::endl;
    std::cout << "Iloraz: " << quotient << std::endl;
    std::cout << "Reszta: " << remainder << std::endl;

    // Operatory logiczne
    bool condition1 = true;
    bool condition2 = false;
    bool result1 = condition1 && condition2;  // Koniunkcja (AND)
    bool result2 = condition1 || condition2;  // Alternatywa (OR)
    bool result3 = !condition1;  // Negacja (NOT)

    std::cout << "Wynik koniunkcji: " << result1 << std::endl;
    std::cout << "Wynik alternatywy: " << result2 << std::endl;
    std::cout << "Wynik negacji: " << result3 << std::endl;

    return 0;
}

