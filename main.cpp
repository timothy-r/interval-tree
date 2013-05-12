#include "node.cpp"

int main()
{
    Node n(40);
    Node l(10);
    Node r(45);

    n.setLeft(&l);
    n.setRight(&r);
    return 0;
}
