#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class Form {

    private:
        const std::string   name;
        bool                is_signed;
        const int           grade_required_to_sign;
        const int           grade_required_to_execute;
        static const int	MAX_GRADE = 1; // static means that it does not belong to a object
		static const int	MIN_GRADE = 150; // but to the whole class

    public:
        Form(); // constructor
        Form(const Form &other); // copy constructor
        Form &operator=(const Form &other); // copy assignment operator
        ~Form(); // destructor
        Form(const std::string name, int gradeToSign, int gradeToExecute); // constructor takes parameters

        // GETTERS

        std::string   getName() const;
        bool          getIsSigned() const;
        int           getGradeRequiredToSign() const;
        int           getGradeRequiredToExecute() const;

        // changes form's status if bureaucrat's grade is high enough
        void    beSigned(const Bureaucrat &guy);

        // attempt to sign the form
        void    signForm(const Form &paper);

        // exception classes
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

// insertion operator
std::ostream &operator<<(std::ostream &out, const Form &paper);

#endif