#include "../includes/PresidentialPardonForm.hpp"

// orthodox cannonical form
PresidentialPardonForm::PresidentialPardonForm() : AForm("Default", 25, 5) {};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src.getName(), src.getSignGrade(), src.getExecuteGrade()) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
    src.getExecuteGrade();
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {};

// other constructor
PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm(target, 25, 5) {}