#include <iostream>
using namespace std;

double mode(double *a, int n) {
    int number = *a;
    int myMode = number;
    int count = 1;
    int countMode = 1;

    for (int i=1; i<n; i++)
    {
    if (a[i] == number) 
    { // count occurrences of the current number
        ++count;
    }
    else
    { // now this is a different number

        count = 1; // reset count for the new number
        number = a[i];
    }
    if (count > countMode) {
                countMode = count;
                myMode = number;
    }
    }

    return myMode;
}

int main() {
    double array[10] = {1, 2, 2, 2, 4, 5, 5, 6, 7, 8};
    double myMode = mode(array, 10);
    cout << mode << endl;


    return 0;
}