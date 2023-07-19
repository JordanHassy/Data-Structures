

template <typename T>
class Stack {
    T * data;
    int top {0};

public:
    Stack(int maxsize) : data{new T[maxsize]}  {}
    ~Stack() {delete [] data;}

    void push(T x) {data[top++] = x;}

    T pop() {return data[--top];}

    bool isEmpty() {return top==0;}

    

};