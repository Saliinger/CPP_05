#include "../includes/Form.hpp"

// orthodox cannonical form
Form::Form() : _name("Default"), _signed(false), _signGrade(150), _executeGrade(150) {}

Form::Form(const Form &src) : _name(src._name), _signed(src._signed),  _signGrade(src._signGrade), _executeGrade(src._executeGrade) {}

Form &Form::operator=(Form const &src) {
    if (this != &src)
        _signed = src._signed;
    return *this;
}

Form::~Form() {}

// other constructor
Form::Form(const std::string name, const int signGrade, const int executeGrade) : _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade) {}

// functions
void Form::beSigned(Bureaucrat const &src) {
    if (src.getGrade() <= _signGrade)
    {
        _signed = true;
        std::cout << src.getName() << " signed " << this->getName() << std::endl;
    }
    else
        throw Form::GradeTooLowException();
}

// getters
const std::string &Form::getName() const { return _name; }

bool Form::isSign() const { return _signed; }

int Form::getSignGrade() const { return _signGrade; }

int Form::getExecuteGrade() const { return _executeGrade; }

// exception
const char *Form::GradeTooLowException::what() const throw() {
    return "Error: Grade too low!";
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Error: Grade too high!";
}

// overload operator
std::ostream &operator<<(std::ostream &out, Form const &src) {
    out << "NAME: " << src.getName() << ",\nSIGNED: " << src.isSign() << ",\nSIGN GRADE: " << src.getSignGrade() << ",\nEXECUTE GRADE: " << src.getExecuteGrade();
    return out;
}