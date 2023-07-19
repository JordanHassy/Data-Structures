#include <iostream>
#include <cmath>
#include <vector>

double sum(double *a, int n) {
    if(n < 0)
        throw std::out_of_range("illegal count");
    else if (a == nullptr)
        throw std::invalid_argument("null pointer");
    double Nsum = 0;
    for (int i = 0; i < n; ++i) 
        Nsum += *(a+i);
    return Nsum;
}

double mean(double *a, int n) {
    if(n <= 0)
        throw std::out_of_range("illegal count");
    else if (a == nullptr)
        throw std::invalid_argument("null pointer");
    double Nsum = sum(a, n);
    return Nsum/n;
}

double largest(double *a, int n) {
    if(n <= 0)
        throw std::out_of_range("illegal count");
    else if (a == nullptr)
        throw std::invalid_argument("null pointer");
    double max = *a;
    for (int i = 1; i < n; ++i) 
        if (*(a+i) > max)
            max = *(a+i);
    
    return max;
}

double smallest(double *a, int n) {
    if(n <= 0)
        throw std::out_of_range("illegal count");
    else if (a == nullptr)
        throw std::invalid_argument("null pointer");
    
    double min = *a;
    for (int i = 1; i < n; ++i)
        if(*(a+i) < min)
            min = *(a+i);
    
    return min;
}

double range(double *a, int n) {
    if(n <= 0)
        throw std::out_of_range("illegal count");
    else if (a == nullptr)
        throw std::invalid_argument("null pointer");
    return (largest(a, n) - smallest(a, n));
}

double deviation(double *a, int n) {
    if(n <= 0)
        throw std::out_of_range("illegal count");
    else if (a == nullptr)
        throw std::invalid_argument("null pointer");
    double myMean = mean(a, n);
    double meanDif[n];
    for(int i = 0; i < n; ++i)
        meanDif[i] = std::abs(*(a+i) - myMean);
    return mean(meanDif, n);

}

double mode(double *a, int n) {
    if(n <= 0)
        throw std::out_of_range("illegal count");
    else if (a == nullptr)
        throw std::invalid_argument("null pointer");

    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            if (a[j] > a[j+1]) {
                std::swap(a[j], a[j+1]);
            }
        }
    }

    double tempNum {a[0]};
    double myMode {tempNum};
    int count {1}, numOccurences {1}, modes {1};
    for (int i=1; i<n; i++) {
        if (a[i] == tempNum) { 
            ++count;
        }
        if(a[i] != tempNum || i == (n-1)){ 
                if (count == numOccurences) {
                    ++modes;
                } else if (count > numOccurences) {
                    numOccurences = count; 
                    myMode = tempNum;
                    modes = 1;
                }
            count = 1; 
            tempNum = a[i];
        }
    }
    
    if (modes > 1) {
        throw std::domain_error("multiple modes");
    }
    return myMode;
}