#include <iostream>
void countdown(int n) {
    if (n >= 1) {
        countdown(n-1);
        for(int i = 0; i < n; ++i) {
            std::cout << n; 
            std::cout << " ";
            for(int j = 10; j-i > 0; --i)
                std::cout << 10-n;
        }
        std::cout << std::endl;
    }
}

int main() {
    countdown(10);
}
