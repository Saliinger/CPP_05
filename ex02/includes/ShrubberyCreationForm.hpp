#pragma once

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public AForm {
    public:
        // orthodox canonical form
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &src);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
        ~ShrubberyCreationForm();

        // other constructor
        ShrubberyCreationForm(const std::string &target);

        // function
        void execute(Bureaucrat const &executor) const;
};