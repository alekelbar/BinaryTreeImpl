#include "BinaryNode.hpp"

template <typename T>
class BinarySearchTree
{
private:
    BinaryNode<T> *root;

    BinaryNode<T> *insert(BinaryNode<T> *node, const T &element)
    {
        if (node == nullptr)
        {
            return new BinaryNode<T>(element);
        }

        if (element < node->getElement())
        {
            node->setLeft(insert(node->getLeft(), element));
        }
        else if (element > node->getElement())
        {
            node->setRight(insert(node->getRight(), element));
        }

        return node;
    }

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

    void add(const T &element)
    {
        root = insert(root, element);
    }
};