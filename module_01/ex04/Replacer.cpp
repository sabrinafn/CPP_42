#include "Replacer.hpp"

void    Replacer::storeArguments(std::string arg1, std::string arg2, std::string arg3) {
 
    filename = arg1;
    str_to_find = arg2;
    new_str = arg3;

    std::cout << "filename = " << filename << std::endl;
    std::cout << "string to find = " << str_to_find << std::endl;
    std::cout << "new string = " << new_str << std::endl;
}

void    Replacer::readFileandStore() {

    std::ifstream text;
    //open file and write to string
    text.open(filename.c_str()); // converting to const char * to pass argument to open()

    if (!text.is_open()) {
        std::cerr << "Error opening file." << std::endl;
        return;
    }
    
    std::string line;
    // Use a while loop together with the getline() function to read the file line by line
    while (getline(text, line)) {
        // Output the text from the file
        fileContent += line;
        //fileContent += '\n'; // Add newline character if needed
        std::cout << line << std::endl;
    }
    text.close();
}

void    Replacer::stringReplace() {

    int index;

    index = fileContent.find(str_to_find, 0);
    if (std::string::npos) {
        std::cout << "String not found in text." << std::endl;
        return ;
    }
    else
        std::cout << "The word [" << str_to_find << "] was found at position: " << index << std::endl;

}