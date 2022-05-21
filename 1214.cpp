#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;
    if (x > 0 && y > 0 && x % 2 != y % 2)
        std::cout << y << ' ' << x;
    else
        std::cout << x << ' ' << y;
    return 0;
}