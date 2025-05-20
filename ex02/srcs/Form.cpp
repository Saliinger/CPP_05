#include "../includes/Form.hpp"

// orthodox cannonical AForm
AForm::AForm() : _name("Default"), _signed(false), _signGrade(150), _executeGrade(150) {}

AForm::AForm(const AForm &src) : _name(src._name), _signed(src._signed),  _signGrade(src._signGrade), _executeGrade(src._executeGrade) {}

AForm &AForm::operator=(AForm const &src) {
    if (this != &src)
        _signed = src._signed;
    return *this;
}

AForm::~AForm() {}

// other constructor
AForm::AForm(const std::string name, const int signGrade, const int executeGrade) : _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade) {}

// functions
void AForm::beSigned(Bureaucrat const &src) {
    if (src.getGrade() <= _signGrade)
    {
        _signed = true;
        std::cout << src.getName() << " signed " << this->getName() << std::endl;
    }
    else
        throw AForm::GradeTooLowException();
}

// getters
const std::string &AForm::getName() const { return _name; }

bool AForm::isSign() const { return _signed; }

int AForm::getSignGrade() const { return _signGrade; }

int AForm::getExecuteGrade() const { return _executeGrade; }

// exception
const char *AForm::GradeTooLowException::what() const throw() {
    return "Error: Grade too low!";
}

const char *AForm::GradeTooHighException::what() const throw() {
    return "Error: Grade too high!";
}

// overload operator
std::ostream &operator<<(std::ostream &out, AForm const &src) {
    out << "NAME: " << src.getName() << ",\nSIGNED: " << src.isSign() << ",\nSIGN GRADE: " << src.getSignGrade() << ",\nEXECUTE GRADE: " << src.getExecuteGrade();
    return out;
}