#include <iostream>
#include <fstream> 
#include <string>  

int main() {
    std::string userInput;
    std::ofstream outFile("bt01.txt", std::ios::app); 

    if (!outFile) {
        std::cerr << "Không th? m? file bt01.txt d? ghi thêm!" << std::endl;
        return 1; 
    }

    std::cout << "Nh?p m?t chu?i b?t k? d? ghi thêm vào file: ";
    std::getline(std::cin, userInput); 

    outFile << userInput << std::endl; 
    outFile.close(); 

    std::cout << "Ðã ghi thêm chu?i vào file bt01.txt thành công!" << std::endl;
    return 0; 
}

