template <typename T>
struct Stack {
    T       data[100];
    int     top = 0;

    void    push(T v)   { data[top++] = v; }
    T       pop()       { return data[--top]; }
    bool    isEmpty()   { return top==0; }
};
