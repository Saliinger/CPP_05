#include <iostream>
#include <stdexcept>

void functionThatThrows() {
    throw std::runtime_error("This is a test exception");
}

int main() {
    try {
        functionThatThrows();
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
        return 1; // Indicate an error
    }
    return 0; // Indicate success
}