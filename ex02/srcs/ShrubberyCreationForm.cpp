#include "../includes/ShrubberyCreationForm.hpp"

// orthodox cannonical form
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", 145, 137, "Default") {};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src.getName(), src.getSignGrade(), src.getExecuteGrade(), src._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
    (void)src;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {};

// other constructor
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm(target, 145, 137, target) {}

// function
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() <= this->getExecuteGrade())
    {
        std::string name = _target + "_shrubbery";
        std::ofstream tree(name.c_str());
        tree << "     ccee88oo" << std::endl;
        tree << "  C8O8O8Q8PoOb o8oo" << std::endl;
        tree << " dOB69QO8PdUOpugoO9bD" << std::endl;
        tree << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
        tree << "    6OuU  /p u gcoUodpP" << std::endl;
        tree << "      /////  /douUP" << std::endl;
        tree << "        //////" << std::endl;
        tree << "         |||" << std::endl;
        tree << "         |||" << std::endl;
        tree << "         |||" << std::endl;
        tree << "   .....//||...." << std::endl;
        tree.close();
    }
    else
        throw ShrubberyCreationForm::GradeTooLowException();
}