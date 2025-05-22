#include <iostream>
#include "./includes/Bureaucrat.hpp"
#include "./includes/Form.hpp"
#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/ShrubberyCreationForm.hpp"
#include "./includes/Intern.hpp"

void init_rand() {
    time_t current_time = time(NULL);
    srand(current_time);
}

int main() {
    init_rand();
    // Intern someIntern;
    // Bureaucrat boss("Chief", 1);

    // std::cout << "\n--- Intern makes valid forms ---\n";
    // AForm *form1 = someIntern.makeForm("PresidentialPardonForm", "Marvin");
    // AForm *form2 = someIntern.makeForm("RobotomyRequestForm", "Droid");
    // AForm *form3 = someIntern.makeForm("ShrubberyCreationForm", "Backyard");

    // std::cout << "\n--- Signing & Executing valid forms ---\n";
    // if (form1) {
    //     boss.signForm(*form1);
    //     boss.executeForm(*form1);
    //     delete form1;
    // }
    // if (form2) {
    //     boss.signForm(*form2);
    //     boss.executeForm(*form2);
    //     delete form2;
    // }
    // if (form3) {
    //     boss.signForm(*form3);
    //     boss.executeForm(*form3);
    //     delete form3;
    // }

    // std::cout << "\n--- Intern makes invalid form ---\n";
    // AForm *form4 = someIntern.makeForm("UnknownFormType", "Nowhere");
    // if (form4)
    //     delete form4;

    Bureaucrat joe("joe", 5);
    Bureaucrat test(joe);
    std::cout << joe << test << std::endl;
    return 0;
}