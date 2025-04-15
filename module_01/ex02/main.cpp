/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <sabrifer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:48:25 by sabrifer          #+#    #+#             */
/*   Updated: 2025/04/15 14:48:27 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main(void) {

    // Initializing variables
    std::cout << "==================================================" << std::endl;
    std::cout << "|            Initializing Variables:             |" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << std::endl;

    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "============================================================================" << std::endl;
    std::cout << "| " << std::left << std::setw(23) << "Identifier"
              << "| " << std::left << std::setw(21) << "Memory Address"
              << "| " << std::left << std::setw(25) << "Value Stored at Address" << "|" << std::endl;
    std::cout << "============================================================================" << std::endl;

    std::cout << "| " << std::left << std::setw(23) << "stringVariable"
              << "| " << std::left << std::setw(21) << *stringPTR
              << "| " << std::left << std::setw(25) << *stringPTR << "|" << std::endl;
    std::cout << "============================================================================" << std::endl;
    std::cout << "The memory address of the string variable: " << &str << std::endl;
    std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "The value of the string variable: " << str << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
     
    return 0;
}
