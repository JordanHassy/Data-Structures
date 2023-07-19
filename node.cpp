#include <iostream>
using namespace std;

class Node {
    public: 
        int * array;
        int value;
        int index = 0;

        Node(int * arr) : array {arr}, value {*(array + index)} {}

        int next() {
            ++index;
            value = *(array + index);
        }
};

void fun(Node n) 
{
  if (n==8)
    return;
  cout << n.value << " ";
    n.next();
   if (n.value != 8){
    n.next();
    n.next();
    fun(n.value );
   }
  cout << n.value << " ";
}

int main() {
    int ARRAY[] = {1, 2, 3, 4, 5, 6, 8, 8, 8, 8, 8};
    fun(ARRAY);

    return 0;
}