#include "../include/node.h"

/**
 * Node class definition
 */
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

