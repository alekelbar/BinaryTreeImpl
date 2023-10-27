#include "BinaryNode.hpp"
// https : // en.wikipedia.org/wiki/Tree_traversal

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
    BinarySearchTree()
    {
        this->root = nullptr; // IMPORTANTISIMO INICIALIZAR...
    }

    bool isEmpty() const { return root == nullptr; }

    bool isRoot(BinaryNode<T> *node) const { return root == node; }

    // Es una hoja...
    bool isLeaf(BinaryNode<T> *node) const
    {
        return this->root->getLeft() == nullptr && this->root->getRight() == nullptr;
    }

    // Es interno...
    bool isInternal(BinaryNode<T> *node) const
    {
        return !isLeaf(node);
    }

    // Add
    void add(const T &element)
    {
        root = insert(root, element);
    }

    BinaryNode<T> *getRoot() const { return root; }

    // Recorridos...

    // Preorden (raíz-izquierda-derecha)
    void preOrder(BinaryNode<T> *node)
    {
        if (node == nullptr)
            return;
        std::cout << node->getElement() << " / ";
        preOrder(node->getLeft());
        preOrder(node->getRight());
    }

    // Postorden (izquierda-derecha-raíz)
    void postOrder(BinaryNode<T> *node)
    {
        if (node == nullptr)
            return;
        preOrder(node->getLeft());
        preOrder(node->getRight());
        std::cout << node->getElement() << " / ";
    }

    // Inorden (izquierda-raíz-derecha)
    void inOrder(BinaryNode<T> *node)
    {
        if (node == nullptr)
            return;
        preOrder(node->getLeft());
        std::cout << node->getElement() << " / ";
        preOrder(node->getRight());
    }

    // altura
    int height(BinaryNode<T> *node) const
    {
        if (node == nullptr)
            return 0;

        int leftHeight = height(node->getLeft());
        int rightHeight = height(node->getRight());

        return 1 + std::max(leftHeight, rightHeight);
    }
};