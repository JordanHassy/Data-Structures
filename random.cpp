#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() { 
    ifstream inFile("file.txt");
    string myString;
    int i = 0;
    while (inFile >> myString) { 
        cout << setw(10) << left << myString;
        cout << i + 1 << endl;
        i++;
    }
    return 0;
}