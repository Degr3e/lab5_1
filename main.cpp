#include <iostream>

int main()
{
    size_t a = 0;
    std::cin >> a;

    if (std::cin.eof()){
        std::cout << 0;
        std::cout << "\n";
    } else if(std::cin.fail()){
        std::cerr << "Error\n";
        return 1;
    }
}