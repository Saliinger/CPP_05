#include "../includes/Bureaucrat.hpp"

// orthodox canonical form
Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
       *this = src;
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade = grade;
}

//functions
std::string Bureaucrat::getName() const {
  return _name;
}

int Bureaucrat::getGrade() const {
  return _grade;
}

void Bureaucrat::promote() {
    if (_grade > 1)
        _grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::demote() {
    if (_grade < 150)
        _grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &toSign) {
    try {
        toSign.beSigned(*this);
    } catch (std::exception &e) {
        std::cout << _name << "couldn't sign " << toSign.getName() << " because " << e.what() << std::endl;
    }
}

// exception
const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "Error: Grade too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Error: Grade too low!";
}

// overload operator
std::ostream &operator<<(std::ostream &out, Bureaucrat const &src) {
    out << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
    return out;
}
