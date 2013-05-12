/**
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
};

Node::Node(int v)
{
    value = v;
}

void Node::setLeft(Node *n)
{
    left = n;
}

void Node::setRight(Node *n)
{
    right = n;
}


