#include "../includes/Form.hpp"

// orthodox cannonical form
Form::Form() : _name("Default"), _signed(false), _signGrade(150), _executeGrade(150) {}

Form::Form(const Form &src) : _name(src._name), _signed(src._signed),  _signGrade(src._signGrade), _executeGrade(src._executeGrade) {}

Form &Form::operator=(Form const &src) {
    if (*this != src)
        _signed = src._signed;
    return *this;
}

Form::~Form() {}

// functions
void Form::beSigned(Bureaucrat const &src) {}

// getters
const std::string &Form::getName() const { return _name; }

bool Form::isSign() const { return _signed; }

int Form::getSignGrade() const { return _signGrade; }

int Form::getExecuteGrade() const { return _executeGrade; }


// setters
void Form::sign() { _signed = true; }

void Form::unsign() { _signed = false; }

// exception
const char *Form::GradeTooLowException::what() const throw(){
    return "Grade to low to sign !";
}

// overload operator
std::ostream &operator<<(std::ostream &out, Form const &src) {
    out << "NAME: " << src.getName() << ",\nSIGNED: " << src.isSign() << ",\nSIGN GRADE: " << src.getSignGrade() << ",\nEXECUTE GRADE: " << src.getExecuteGrade() << std::endl;
    return out;
}