#include <iostream>
#include <cassert>
#include "queue_list.h"
using namespace std;

int main()
{
    // push 3, pop 2, push 1, pop 1, push 3, pop 2, push 1, pop 3 [now empty] push 2, pop 2
    double A = 1.1, B = 2.3, C = 3.03, D = 4.14, E = 5.16, F = -6.5, G = 7.0, H = 8.2, V;

    Queue<double> s;

    // push 3
    s.push(A);
    s.push(B);
    s.push(C);

    // pop 2
    V = s.pop();
    V = s.pop();

    // push 1
    s.push(D);

    // pop 1
    V = s.pop();

    // push 3
    s.push(E);
    s.push(F);
    s.push(G);

    // pop 2
    V = s.pop();
    V = s.pop();

    // push 1
    s.push(H);

    // pop 3
    V = s.pop();
    V = s.pop();
    V = s.pop();
    assert(s.isEmpty());
    s.push(E);
    s.push(F);
    assert(!s.isEmpty());
}