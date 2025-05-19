#include <iostream>
#include "./includes/Bureaucrat.hpp"
#include "./includes/Form.hpp"

int main() {
    std::cout << "=== Basic Form Signing Test ===" << std::endl;

    try {
        Bureaucrat alice("Alice", 50);
        Form formA("TaxForm", 75, 100);

        std::cout << alice << std::endl;
        // std::cout << formA << std::endl;

        alice.signForm(formA); // should succeed
        // std::cout << formA << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n=== Signing With Too Low Grade ===" << std::endl;
    try {
        Bureaucrat bob("Bob", 100);
        Form formB("TopSecret", 50, 50);

        std::cout << bob << std::endl;
        // std::cout << formB << std::endl;

        bob.signForm(formB); // should fail
        // std::cout << formB << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n=== Invalid Form Grade Test ===" << std::endl;
    try {
        Form brokenForm("ImpossibleForm", 0, 151); // invalid grades
    } catch (std::exception &e) {
        std::cerr << "Caught exception during form creation: " << e.what() << std::endl;
    }

    std::cout << "\n=== Invalid Bureaucrat Grade Test ===" << std::endl;
    try {
        Bureaucrat badGuy("BadGuy", 151); // invalid grade
    } catch (std::exception &e) {
        std::cerr << "Caught exception during bureaucrat creation: " << e.what() << std::endl;
    }

    return 0;
}
