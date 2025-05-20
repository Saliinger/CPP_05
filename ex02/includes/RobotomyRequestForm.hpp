#pragma once

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public AForm {
    public:
        // othodox cannonical form
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &src);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
        ~RobotomyRequestForm();

        // other constructor
        RobotomyRequestForm(const std::string &target);

        // function
        void execute(Bureaucrat const &executor) const;
};