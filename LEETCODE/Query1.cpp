#include <iostream>

void jump(int x, int min) {
    if (min <= 4) return;
    std::cout << "x: " << x << std::endl;
    std::cout << "min: " << min << std::endl;
    min--;x++;
    jump(x, min); // Use pre-increment and pre-decrement
}

int main() {
    int x = 0, min = 10;
    jump(x, min);
    return 0; // Add a return statement to main
}
