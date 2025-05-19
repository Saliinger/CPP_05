#pragma once

#include <iostream>

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
        void getName();
        void getSignature();
        void getSignGrade();
        void getExecuteGrade();

        void setName();
        void setSignature();
        void setSignGrade();
        void setExecuteGrade();


};

std::ostream &operator<<(std::ofstream &out, Form const &src);