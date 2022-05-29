#include <iostream>

int main()
{
   unsigned int number;
   std::cin >> number;

   uint32_t result;
   if( number == 1 ){
      result = 1; 
   } else if( number % 4 == 0 ){
      result = 0; 
   } else if( number % 4 == 3 || ( number % 4 == 1 && number % 5 == 0 ) ){
      result = 2; 
   }else{
      result = 1; 
   }

   std::cout << result << std::endl;

   return 0;
}