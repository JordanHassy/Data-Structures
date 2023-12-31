#include <iostream>
#include <cassert>
#include "stack_list.h"
using namespace std;

int main()
{
    char A = 'A', B = 'B', C = 'C', popped;

    Stack<char> s;
    assert(s.isEmpty());
    
    s.push(A);
    assert(!s.isEmpty());
    s.push(B);

    popped = s.pop();
    assert(popped == B);
    popped = s.pop();
    assert(popped == A);
    
    // Add more function calls and assertions
}