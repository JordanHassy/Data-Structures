#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char**argv) {
    const int N = argc-1;
    bool array[N-1] {0}, goodSeq {1};
    for(int i = 1; i < N; ++i) {
        int absDifference = abs(stoi(argv[i]) - stoi(argv[i+1]));
        if (absDifference < N && absDifference > 0 && !array[absDifference-1])
            array[absDifference-1]=true;
        else
            goodSeq = false;
    }
    if (goodSeq)
        cout << "Good sequence.\n";
    else {
        int i = 0;
        while(array[i]){++i;}
        cout << "Bad sequence: missing " << i+1 << ".\n";

    }

    return 0;
}