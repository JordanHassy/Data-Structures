template <typename T>
class Set {
private:
    int size;
    class Node {
        public:
        Node * nextL; 
        Node * nextR;
        Node * parent;
        T value;
        bool isRoot;

        Node() : nextL{nullptr}, nextR{nullptr}, parent{nullptr}, isRoot{false} {}

        bool cont(T val) {
            if(val == value)
                return true;
            else if(val < value) {
                if(nextL)
                    return nextL->cont(val);
            }else if (val > value) {
                if(nextR)
                    return nextR->cont(val);
            }
            return false;
        }

        void ins(T val) {
            if(isRoot) {
                value = val;
            }
            else if(val <= value)    
                if(!nextL) {
                    Node * newNode = new Node;
                    newNode->value = val;
                    nextL = newNode;
                }
                else nextL->ins(val);
            else {
                if(!nextR) {
                    Node * newNode = new Node;
                    newNode->value = val;
                    nextR = newNode;
                } else nextR->ins(val);
            }   
        }
    };
    Node * root;
public:
    Set() : size{0} {root->isRoot = true;}

    ~Set() {
        if(root->nextL != nullptr)
            del(root->nextL);
        if(root->nextR != nullptr)
            del(root->nextR);
        delete root;
    }

    void del(Node * curr) {
        if(curr->nextL  != nullptr)
            del(curr->nextL);
        if (curr->nextR != nullptr)
            del(curr->nextR);
        delete curr;
    }

    void insert(T val) {
        root->ins(val);
        ++size;
    }

    bool contains(T val) {
        return root->cont(val);
    }

    int getSize() {return size;}

    void remove(T val) {
        7;
    }



};