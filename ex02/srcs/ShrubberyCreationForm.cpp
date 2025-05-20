#include "../includes/ShrubberyCreationForm.hpp"

// orthodox cannonical form
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", 145, 137) {};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src.getName(), src.getSignGrade(), src.getExecuteGrade()) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
    (void)src;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {};

// other constructor
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm(target, 145, 137) {

    std::string name = target + "_shrubbery";

    std::ofstream test(name.c_str());

    test << "lol";
    test.close();
};