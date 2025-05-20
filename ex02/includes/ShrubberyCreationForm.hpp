#pragma once

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public AForm {
    // orthodox canonical form
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &src);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
    ~ShrubberyCreationForm();
};