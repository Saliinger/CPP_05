#include "../includes/RobotomyRequestForm.hpp"

// orthodox cannonical form
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45, "Default") {};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm("RobotomyRequestForm", src.getSignGrade(), src.getExecuteGrade(), src._target){}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
    (void)src;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {};

// other constructor
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45, target) {
    std::cout << "Robotomy fail 50% of the time" << std::endl;
};

// function
void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() <= this->getExecuteGrade())
    { 
        int random = rand() % 2;
        if (random)
            std::cout << _target << " has been robotomized" << std::endl;
        else
            std::cout << _target << " has failed to robotomized" << std::endl;
    }
    else
        throw RobotomyRequestForm::GradeTooLowException();
}