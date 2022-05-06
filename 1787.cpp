#include <iostream>

int main()
{   int k, n, t;
    int c = 0;

    std::cin >> k >> n;
    for (int i = 0; i < n; i++){
        std::cin >> t;
        c += (t - k);
        if (c < 0){c = 0;}            
    }
    std::cout << c;
    return 0;
}