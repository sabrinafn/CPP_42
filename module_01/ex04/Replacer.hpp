#ifndef REPLACER_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class   Replacer {
    
    private:
        std::string     filename;
        std::string     str_to_find;
        std::string     new_str;
        std::string     file_content;
        std::string     output_string;

    public:
        Replacer();
        ~Replacer();

        int  findSubstrPos(int start);
        void    storeArguments(std::string arg1, std::string arg2, std::string arg3);
        void    readFileandStore();
        void    stringReplace();
        void    writeToFile();


};

#endif