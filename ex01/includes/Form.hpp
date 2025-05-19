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

        // functions
        std::string getName() const;
        bool getSignature() const;
        int getSignGrade() const;
        int getExecuteGrade() const;

        void setName(std::string const name);
        void setSignature(bool const signature);
        void setSignGrade(int const signGrade);
        void setExecuteGrade(int const exectuteGrade);

        void beSigned(Bureaucrat const &src);

        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what(void) const throw();
        };
};

std::ostream &operator<<(std::ofstream &out, Form const &src);