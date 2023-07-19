#include <iostream>

    double findArea(double r) {
        return (3.1415926536 * r * r);
    }

    double findCircumference(double r) {
        return (2 * 3.1425926536 * r);
    }


int main(int argc, char*argv[]) {
    double circumference {};
    double area {};
    if (argc > 1) {
        circumference = findCircumference(std::stoi(argv[1]));
        area = findArea(std::stoi(*(argv + 1)));
    } else {
        double radius {};
        std::cout << "Enter the radius of the circle: ";
        std::cin >> radius;
        circumference = findCircumference(radius);
        area = findArea(radius);
    }

    std::cout << "Area of circle is " << area << " and the circumference is " << circumference << std::endl;

    return 0;
}