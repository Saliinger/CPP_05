#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default") {
    std::cout << "Default constructor called" << std::endl;
    _grade = 0;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
    std::cout << "Copy constructor called" << std::endl;
    _name = src._name;
    grade = src.grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src) {
        _name = src._name;
        _grade = src.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    std::cout << "Parameterized constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade = grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return "Error: Grade too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return "Error: Grade too low!";
}
