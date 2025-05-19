#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
    private:
        const std::string _name;
        bool _signed;
        const int _signGrade;
        const int _executeGrade;
    public:
        // orthodox canonical form
        Form();
        Form(Form const &src);
        Form &operator=(Form const &src);
        ~Form();

        // other constructor
        Form(const std::string name, const bool sign, const int signGrade, const int executeGrade);

        // functions
        const std::string &getName() const;
        bool isSign() const;
        int getSignGrade() const;
        int getExecuteGrade() const;

      
        void sign();
        void unsign();

        void beSigned(Bureaucrat const &src);

        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what(void) const throw();
        };
};

std::ostream &operator<<(std::ofstream &out, Form const &src);