#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {

    private:
        std::string         target;
            
    protected:
        void action() const;
    
    public:
        ShrubberyCreationForm(); // constructor
        ShrubberyCreationForm(const ShrubberyCreationForm &other); // copy constructor
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other); // copy assignment operator
        ~ShrubberyCreationForm(); // destructor
        ShrubberyCreationForm(const std::string target); // constructor takes parameters
        void    drawTrees(std::ofstream &output) const;

};

#endif