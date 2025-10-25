#include <iostream>
#include <cstddef>
#include <limits>

bool canPow(size_t a){
    size_t max = std::numeric_limits<size_t>::max();
    return (a < max / a);
}

size_t canSum(size_t a, size_t b){
    size_t max = std::numeric_limits<size_t>::max();
    return (a < max - b);
}


bool isPyth(unsigned a, unsigned b, unsigned c)
{
    bool p = a*a == (b*b + c*c);
    p = p || (b*b == (a*a + c*c));
    p = p || (c*c == (a*a + b*b));
    return p;
}

int main()
{
    size_t a = 0, b = 0, c = 0;
    std::cin >> c >> b;
    size_t count = 0;

    while (std::cin >> a){
        bool w = canPow(a);
        w = w || canPow(b);
        w = w || canPow(c);

        if (!w){
            std::cout << "out of limit :(\n";
            return 2;
        }
        bool v = canSum(a*a, b*b);
        v = v || canSum(b*b, c*c);
        v = v || canSum(a*a, c*c);

        if (!v){
            std::cout << "out off limit :(\n";
            return 2;
        }

        count += isPyth(a,b,c) ? 1 : 0;
        c = b;
        b = a;
    }

    if (std::cin.eof()){
        std::cout << count;
        std::cout << "\n";
    } else if(std::cin.fail()){
        std::cerr << "Error\n";
        return 1;
    }
}