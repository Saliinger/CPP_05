#include "../includes/RobotomyRequestForm.hpp"

// orthodox cannonical form
RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 72, 45), _target("Default") {};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src.getName(), src.getSignGrade(), src.getExecuteGrade()), _target(src._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
    (void)src;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {};

// other constructor
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm(target, 72, 45), _target("Default") {
    std::cout << "Robotomy fail 50% of the time" << std::endl;
};

// function
void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    int random = rand() % 2;

    if (random)
        std::cout << _target << " has been robotomized" << std::endl;
    else
        std::cout << _target << " has failed to robotomized" << std::endl;
}