/**
 * A Node in an interval tree
 */
class Node
{
    protected:
        Node *left, *right;
        int value;
    
    public:
        Node(int value);
        void setLeft(Node *n);
        void setRight(Node *n);

        int getValue();
        Node* getLeft();
        Node* getRight();
};

