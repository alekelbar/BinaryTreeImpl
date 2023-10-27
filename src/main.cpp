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
    std::cout << tree.depth(4) << std::endl;

    return 0;
}
