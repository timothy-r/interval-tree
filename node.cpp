/**
 */
class Node
{
    protected:
        Node* left;
        Node* right;
        int value;
    
    public:
        void setLeft(Node* n);
        void setRight(Node* n);
};

void Node::setLeft(Node* n)
{
    left = n;
}

void Node::setRight(Node* n)
{
    right = n;
}


