#include <iostream>
#include "./includes/Bureaucrat.hpp"
#include "./includes/Form.hpp"
#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/ShrubberyCreationForm.hpp"

void init_rand() {
    time_t current_time = time(NULL);
    srand(current_time);
}

int main() {
    init_rand();
    try {
        Bureaucrat highRank("Alice", 1);
        Bureaucrat lowRank("Bob", 150);

        PresidentialPardonForm ppf("Target_A");
        RobotomyRequestForm rrf("Target_B");
        ShrubberyCreationForm scf("Target_C");

        std::cout << "\n--- Trying to sign forms ---\n";
        lowRank.signForm(ppf); // Should fail
        highRank.signForm(ppf); // Should succeed

        lowRank.signForm(rrf); // Should fail
        highRank.signForm(rrf); // Should succeed

        highRank.signForm(scf); // Should succeed

        std::cout << "\n--- Trying to execute forms ---\n";
        lowRank.executeForm(ppf); // Should fail
        highRank.executeForm(ppf); // Should succeed

        highRank.executeForm(rrf); // 50% chance to succeed
        highRank.executeForm(scf); // Should write a file

    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
