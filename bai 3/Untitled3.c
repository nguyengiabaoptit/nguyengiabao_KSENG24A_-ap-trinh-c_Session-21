#include <iostream>
#include <fstream> 
#include <string>  

int main() {
    std::string userInput;
    std::ofstream outFile("bt01.txt", std::ios::app); 

    if (!outFile) {
        std::cerr << "Kh�ng th? m? file bt01.txt d? ghi th�m!" << std::endl;
        return 1; 
    }

    std::cout << "Nh?p m?t chu?i b?t k? d? ghi th�m v�o file: ";
    std::getline(std::cin, userInput); 

    outFile << userInput << std::endl; 
    outFile.close(); 

    std::cout << "�� ghi th�m chu?i v�o file bt01.txt th�nh c�ng!" << std::endl;
    return 0; 
}

