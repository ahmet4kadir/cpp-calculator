#include <iostream>
#include <string>

int main(){
    std::string user_eq;
    std::string num1;
    std::string num2;
    char op;

    std::cout << "Enter your equation (3*4, 12x6, 4+6, 74-2...): ";
    std::cin >> user_eq;
    for (int i = 0; i < user_eq.length(); i++){ 
        if (user_eq[i] == '+' || user_eq[i] == '-' || user_eq[i] == '*' || user_eq[i] == 'x' || user_eq[i] == '/') {
            op = user_eq[i];
            num1 = user_eq.substr(0, i);
            num2 = user_eq.substr(i + 1);
            break;
        }
    }
    
    std::cout << "Result: ";
    switch(op) {
        case '+':
            std::cout << std::stoi(num1) + std::stoi(num2) << std::endl;
            break;
        case '-':
            std::cout << std::stoi(num1) - std::stoi(num2) << std::endl;
            break;  
        case '*':
            std::cout << std::stoi(num1) * std::stoi(num2) << std::endl;
            break;
        case 'x': 
            std::cout << std::stoi(num1) * std::stoi(num2) << std::endl;
            break;
        case '/':
            if (std::stoi(num2) == 0) {
                std::cout << "Error: Division by zero!" << std::endl;
            } else {
                std::cout << std::stoi(num1) / std::stoi(num2) << std::endl;
            }
            break;
        default:
            std::cout << "Error: Invalid operator!" << std::endl;
            break;
                                   
    }





    std::cout << "Press Enter to exit...";
    std::cin.ignore();
    std::cin.get();


    return 0;
}