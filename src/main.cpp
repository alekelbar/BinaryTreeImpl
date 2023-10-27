#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "BinarySearchTree.hpp"

int main()
{
    BinarySearchTree<int> tree;

    tree.add(2); // Agregar 2
    tree.add(1); // Agregar 1
    tree.add(3); // Agregar 3

    // std::cout << tree.getRoot()->getElement() << std::endl;
    tree.inOrder(tree.getRoot());
    std::cout << std::endl;
    tree.postOrder(tree.getRoot());
    std::cout << std::endl;
    tree.preOrder(tree.getRoot());
    std::cout << std::endl;

    return 0;
}
