#pragma once

#include <iostream>
#include "Form.hpp"

class Intern {
    public:
        // orthodox cannonical form
        Intern();
        Intern(const Intern &src);
        Intern &operator=(const Intern &src);
        ~Intern();

        // function
        AForm *makeForm(const std::string &formName, const std::string &targetForm);
};