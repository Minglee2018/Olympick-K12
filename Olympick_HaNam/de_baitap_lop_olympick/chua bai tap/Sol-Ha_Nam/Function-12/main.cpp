#include <iostream>
#include <string>

int main() {
    std::string hi = "Hello, World!";

    for(int x : hi) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    for(auto c : hi) {
        std::cout << c << " ";
    }
    std::cout << std::endl;
}
