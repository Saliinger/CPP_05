#pragma once

#include <iostream>

class Bureaucrat;

class AForm {
    private:
        const std::string _name;
        bool _signed;
        const int _signGrade;
        const int _executeGrade;
    protected:
        const std::string _target;
    public:
        // orthodox canonical form
        AForm();
        AForm(AForm const &src);
        AForm &operator=(AForm const &src);
        virtual ~AForm() = 0;

        // other constructor
        AForm(const std::string name, const int signGrade, const int executeGrade);

        // getter
        const std::string &getName() const;
        bool isSign() const;
        int getSignGrade() const;
        int getExecuteGrade() const;

        // functions
        void beSigned(Bureaucrat const &src);
        virtual void execute(Bureaucrat const &executor) const = 0;

        // exception
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what(void) const throw();
        };

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what(void) const throw();
        };
};

#include "Bureaucrat.hpp"

std::ostream &operator<<(std::ofstream &out, AForm const &src);