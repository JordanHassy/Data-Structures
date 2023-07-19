#include <iostream>
#include <cmath>

int main() {
   double cranks{};
   double degrees{};

   std::cin >> cranks >> degrees;

   degrees = (degrees*3.14159265)/180;

   double fin = (pow((cranks*22), 2)*sin(2*degrees))/32.5;
   std::cout << fin;
}