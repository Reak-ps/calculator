#include <iostream>

int main() {
    double a, b;
    char op;
    std::cout << "Enter First number: " << std::flush;
    std::cin >> a;
    std::cout << "Enter Operator (+, - , *, /): " <<std::flush;
    std::cin >> op;
    std::cout << "Enter Second number: " << std::flush;
    std::cin >> b;
    std::cout << a << " " << op << " " << b << " = ";

    switch (op) {
        case '+':
            std::cout << a + b << std::endl;
            break;
        case '-':
            std::cout << a - b << std::endl;
            break;
        case '*':
            std::cout << a * b << std::endl;
            break;
        case '/':
            if (b == 0) {
                std::cout << "Division by zero" << std::endl;
                return 1;
            }
            std::cout << a / b << std::endl;
            break;
        default:
            std::cout << "Invalid operation" << std::endl;
            break;
    }

    return 0;
}