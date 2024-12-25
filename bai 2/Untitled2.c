#include <iostream>
#include <fstream> 

int main() {
    std::ifstream inFile("bt01.txt"); 

    if (!inFile) {
        std::cerr << "Không th? m? file bt01.txt d? d?c!" << std::endl;
        return 1; 
    }

    char firstChar;
    inFile >> std::noskipws >> firstChar; 

    if (inFile) {
        std::cout << "Ký t? d?u tiên trong file là: " << firstChar << std::endl;
    } else {
        std::cout << "File bt01.txt r?ng ho?c không có ký t? h?p l?!" << std::endl;
    }

    inFile.close(); 
    return 0; 
}

