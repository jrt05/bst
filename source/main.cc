
#include <iostream>
#include "bst.h"

int main()
{
    //BST val;
    //std::cout << val.getroot() << "\n";

    Node txt(856);

    Node *root = nullptr;

    root = new Node(99);
    std::cout << "----" << root->getval() << "----\n";
    delete root;

    return 0;
}