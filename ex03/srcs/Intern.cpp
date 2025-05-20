#include "../includes/Intern.hpp"

// orthodox cannonical form
Intern::Intern() {}

Intern::Intern(const Intern &src) {(void)src;}

Intern &Intern::operator=(const Intern &src) {(void)src;return *this;}

Intern::~Intern() {}

// function

static AForm *createPresidentialPardonForm(const std::string &target) {
    return new PresidentialPardonForm(target);
}

static AForm *createRobotomyRequestForm(const std::string &target) {
    return new RobotomyRequestForm(target);
}

static AForm *createShrubberyCreationForm(const std::string &target) {
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(const std::string &formName, const std::string &targetName) {
    std::string formType[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

    AForm *(*form[3])(const std::string &) = {
        createPresidentialPardonForm,
        createRobotomyRequestForm,
        createShrubberyCreationForm,
    };

    for(int i = 0; i < 3; i++) {
        if (formName == formType[i]) {
            std::cout << "Intern create: " << formType[i] << std::endl;
            return form[i](targetName);
        }
    }
    std::cout << "Error: the form name doesn't exist!" << std::endl;
    return NULL;
}