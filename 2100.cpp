#include <iostream>
#include <string>

std::string trim(const std::string & s)
{
  const static std::string WHITESPACES = " \n\r\t\f\v";
  
  const std::size_t from = s.find_first_not_of(WHITESPACES);
  if (from == std::string::npos) return "";
  std::string res = s.substr(from);
 
  const std::size_t to = res.find_last_not_of(WHITESPACES);
  if (to == std::string::npos) return "";
  return res.substr(0, to + 1);
}

int main()
{
  int n, guests, people = 2;
  std::cin >> n;
  std::string line;
  while (std::getline(std::cin, line))
  {
    line = trim(line);
    if (line.empty()) continue; // первая строка прочиталась до конца?
    guests = (line.find("+one") == std::string::npos) ? 1 : 2;
    people += guests;
    if (!(--n)) break;
  }
   
  if (people == 13)
    people++;
  std::cout << people * 100 << std::endl;
  return 0;
}

