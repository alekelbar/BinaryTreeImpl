#include "BinaryNode.hpp"

template <typename T>
class BinarySearchTree
{
private:
    BinaryNode<T> *root;

public:
    bool isEmpty() const { return root == nullptr; }

    bool isRoot(BinaryNode<T> *node) const { return root == node; }

    // Es una hoja...
    bool isLeaf(BinaryNode<T> *node) const
    {
        this->root->getLeft() == nullptr &&this->root->getRight() == nullptr;
        return
    }

    bool isInternal(BinaryNode<T> *node) const
    {
        return !isLeaf(node);
    }
};