
template <typename T>
class Queue {
    T * data;
    int head;
    int tail;
    int size;

public:
    Queue(int maxsize) : data{new T[maxsize]}, head{0}, tail{0}, size{maxsize} {}

    ~Queue() {delete [] data;}

    void push(T pushData) {
        data[tail] = pushData;
        ++tail;
        tail = tail%size;
    }

    T pop() {
        T x = data[head];
        ++head;
        head = head%size;
        return x;
    }

    bool isEmpty() {
        return head == tail;
    }

    int getSize() {
        if (tail >= head) return tail-head;
        else return (5-head + tail);
    }
};