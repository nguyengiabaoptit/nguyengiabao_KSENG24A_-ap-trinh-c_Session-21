#include <iostream>
#include <fstream> 
#include <string>  

int main() {
    std::string userInput;
    std::ofstream outFile("bt01.txt"); 

    if (!outFile) {
        std::cerr << "Không th? m? file bt01.txt d? ghi!" << std::endl;
        return 1; 
    }

    std::cout << "Nh?p m?t chu?i b?t k?: ";
    std::getline(std::cin, userInput); 

    outFile << userInput; 
    outFile.close(); 

    std::cout << "Ðã ghi chu?i vào file bt01.txt thành công!" << std::endl;
    return 0;
}

