template <typename T>

class Queue {
    private:
        class Node {
            public:
            T value;
            Node * next;
            Node * prev;

        };

        Node * head;
        Node * tail;


    public:
        Queue() {
            head = new Node;
            tail = new Node;
            tail->prev = head;
            head->next = tail;

        }

        ~Queue() {
            while(!(tail->prev == head)) {
                Node * holder = tail->prev;
                tail->prev = holder->prev;
                delete holder;
            }
            delete head;
            delete tail;
        }

        bool isEmpty() {
            return tail->prev == head;
        }

        void push (T x) {
            if(head->next == tail){
                head->next = new Node;
                tail->prev = head->next;
                head->next->value = x;
                head->next->next = tail;
                head->next->prev = head;
            }
            else {
                Node * holder = new Node;
                head->next->prev = holder;
                holder->next = head->next;
                head->next = holder;
                holder->prev = head;
                holder->value = x;

            }
        }

        T pop() {
            Node * holder = tail->prev;
            T valHolder = tail->prev->value;
            tail->prev = tail->prev->prev;
            delete holder;
            if (tail->prev == head) 
                head->next = tail;
            return valHolder;
        }


};