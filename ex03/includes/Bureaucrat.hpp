#pragma once

#include <iostream>

class AForm;

class Bureaucrat {
    private:
        const std::string _name;
        int _grade;
    public:
        // orthodox canonical form
        Bureaucrat();
        Bureaucrat(Bureaucrat const &src);
        Bureaucrat &operator=(Bureaucrat const &src);
        ~Bureaucrat();

        Bureaucrat(std::string name, int grade);

        // functions
        std::string getName() const;
        int getGrade() const;
        void promote();
        void demote();

        void signForm(AForm &toSign);
        void executeForm(const AForm &form) const;

        // exception
        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what(void) const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what(void) const throw();
        };
};

#include "Form.hpp"

std::ostream &operator<<(std::ostream &out, Bureaucrat const &src);