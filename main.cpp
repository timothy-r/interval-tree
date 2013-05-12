#include "src/node.cpp"
#include <iostream>
using namespace std;

int main()
{
    Node n(40);
    Node l(10);
    Node r(45);

    n.setLeft(&l);
    n.setRight(&r);
    cout << "Node " << n.getValue() << endl;
    cout << "Left " << n.getLeft()->getValue() << endl;
    cout << "Right " << n.getRight()->getValue() << endl;
    return 0;
}
