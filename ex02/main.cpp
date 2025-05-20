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
    std::cout << "init randomizer" << std::endl;
    init_rand();
    std::cout << "randomizer initialize" << std::endl;

    
    ShrubberyCreationForm test("hello world!");
    return 0;
}
