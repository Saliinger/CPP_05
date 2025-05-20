#pragma once

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public AForm {
    // othodox cannonical form
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &src);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
    ~RobotomyRequestForm();
};