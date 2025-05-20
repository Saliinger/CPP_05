#include "../includes/RobotomyRequestForm.hpp"

// orthodox cannonical form
RobotomyRequestForm::RobotomyRequestForm() : AForm("Default", 72, 45) {};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src.getName(), src.getSignGrade(), src.getExecuteGrade()) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src) {
    (void)src;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {};

// other constructor
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm(target, 72, 45) {
    std::cout << "Robotomy fail 50% of the time" << std::endl;
};

// function
void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    
}