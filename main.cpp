#include <iostream>

int main()
{
    size_t a = 0;
    size_t count = 0;
    while (std::cin >> a){
        count++;
    }

    if (std::cin.eof()){
        std::cout << count;
        std::cout << "\n";
    } else if(std::cin.fail()){
        std::cerr << "Error\n";
        return 1;
    }
}