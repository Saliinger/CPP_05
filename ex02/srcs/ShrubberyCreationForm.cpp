#include "../includes/ShrubberyCreationForm.hpp"

// orthodox cannonical form
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", 145, 137) {};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src.getName(), src.getSignGrade(), src.getExecuteGrade()) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {};

// other constructor
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm(target, 145, 137) {
    std::ofstream test(target + "_shrubbery");

    test << "lol";
    test.close();
};