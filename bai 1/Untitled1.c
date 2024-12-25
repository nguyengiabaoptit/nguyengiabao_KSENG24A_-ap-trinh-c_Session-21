#include <iostream>
#include <fstream> 
#include <string>  

int main() {
    std::string userInput;
    std::ofstream outFile("bt01.txt"); 

    if (!outFile) {
        std::cerr << "Kh�ng th? m? file bt01.txt d? ghi!" << std::endl;
        return 1; 
    }

    std::cout << "Nh?p m?t chu?i b?t k?: ";
    std::getline(std::cin, userInput); 

    outFile << userInput; 
    outFile.close(); 

    std::cout << "�� ghi chu?i v�o file bt01.txt th�nh c�ng!" << std::endl;
    return 0;
}

