#include "../includes/PresidentialPardonForm.hpp"

// orthodox cannonical form
PresidentialPardonForm::PresidentialPardonForm() : AForm("Default", 25, 5, "Default") {};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src.getName(), src.getSignGrade(), src.getExecuteGrade(), src._target){}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
    (void)src;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {};

// other constructor
PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm(target, 25, 5, target) {}

// function
void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (executor.getGrade() <= this->getExecuteGrade())
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    else
        throw PresidentialPardonForm::GradeTooLowException();
}