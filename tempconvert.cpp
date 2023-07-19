#include <string>
#include <algorithm>
#include <stdexcept>
#include <iostream>

class TempConvert {
  public:
    std::string normalizeScale(std::string s) {
      if (s.empty()) {
        throw std::invalid_argument("Scale is null.\n");
      }
      transform(s.begin(), s.end(), s.begin(), ::tolower);  
//converts string to lower case
      if (( s == "c") || (s.substr(0,4) == "cels" )) { return "C"; }
      if (( s == "f") || (s.substr(0,4) == "fahr" )) { return "F"; }
      return "?";
  }

    double convertTemp(double temp, std::string inScale, std::string outScale) {
      inScale = normalizeScale(inScale);
      outScale = normalizeScale(outScale);
      if (inScale == outScale) { return temp; } 
      else if (inScale == "C") { return cToF(temp); } 
      else                     { return fToC(temp); }
  }
  double cToF(double c) { return 32  +  c * 9/5; }  
    double fToC(double f) { return (f - 32) * 5/9; }
}; // end class

int main() {
    TempConvert tc;
    std::cout << "I am the converter.\n";
    std::cout << "Input temp?  ";
    double  itemp;
    std::cin >> itemp;
    std::cout << "Input units?  ";
    std::string  iunit;
    std::cin >> iunit;
    std::cout << "Output units?  ";
    std::string  ounit; 
    std::cin >> ounit;
    try {
       double otemp = tc.convertTemp(itemp, iunit, ounit);
       std::cout << "The answer is " << otemp;
    }
    catch (const std::exception& e) {
        std::cout << e.what();
    }
  } 