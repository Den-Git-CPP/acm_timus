#include <iostream>

int main()
{
  int n, k;
  std::cin >> n >> k;
  if (k >= n){
    std::cout << 2 << std::endl;
  } else {
    int number_of_pans = (int)(n / k);
    int more_steak_sides = (n % k) + n;
    number_of_pans += (more_steak_sides + k - 1) / k;
    std::cout << number_of_pans << std::endl;
  }
  return 0;
}
