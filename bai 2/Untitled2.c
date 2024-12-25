#include <iostream>
#include <fstream> 

int main() {
    std::ifstream inFile("bt01.txt"); 

    if (!inFile) {
        std::cerr << "Kh�ng th? m? file bt01.txt d? d?c!" << std::endl;
        return 1; 
    }

    char firstChar;
    inFile >> std::noskipws >> firstChar; 

    if (inFile) {
        std::cout << "K� t? d?u ti�n trong file l�: " << firstChar << std::endl;
    } else {
        std::cout << "File bt01.txt r?ng ho?c kh�ng c� k� t? h?p l?!" << std::endl;
    }

    inFile.close(); 
    return 0; 
}

