#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public AForm {
    private:
        const std::string _target;
    public:
        // orthodox cannonical form
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &src);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
        ~PresidentialPardonForm();

        // other constructor
        PresidentialPardonForm(const std::string target);

        // function
        void execute(Bureaucrat const &executor) const;
};