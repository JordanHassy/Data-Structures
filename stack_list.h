template <typename T>
class Stack {
private:

    class Node {
        public:
            T value;
            Node * next;
    };

    Node * head;

public:
    Stack() {
        head = nullptr;
    };

    ~Stack() {
        while (head != nullptr) {
            this->pop();
        }
    }

    bool isEmpty() {
        if(head == nullptr) return true;
        return false;
    }

    void push(T x) {
        Node * newNode = new Node;
        newNode->value = x;
        newNode->next = head;
        head = newNode;
    }

    T pop() {
        T holder = head->value;
        Node * pointerHolder = head;
        head = head->next;
        delete pointerHolder;
        return holder;
    }
};