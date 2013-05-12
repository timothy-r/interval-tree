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
    cout << n.getValue() << endl;
    cout << n.getLeft()->getValue() << endl;
    return 0;
}
