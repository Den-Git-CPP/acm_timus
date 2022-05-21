#include <iostream>

int main()
{
  int a, b, c;
  std::cin >> a >> b >> c;
  if (b == 0){std::cout << -c << std::endl;}
  else if (b == 1){std::cout << a - b - c << std::endl;} 
    else std::cout << a - b * c << std::endl;
  return 0;
}