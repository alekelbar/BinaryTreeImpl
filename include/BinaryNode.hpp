template <typename T>
class BinaryNode
{
private:
    T element;
    BinaryNode<T> *parent;
    BinaryNode<T> *left;
    BinaryNode<T> *right;

public:
    // Metodos de acceso público...
    BinaryNode(T element)
    {
        this->element = element;
        this->left = nullptr;
        this->right = nullptr;
        this->parent = nullptr;
    }

    // sobrecarga del constructor...COMPLETO..
    BinaryNode(T element, BinaryNode<T> *left, BinaryNode<T> *right, BinaryNode<T> *parent)
    {
        this->element = element;
        this->left = left;
        this->right = right;
        this->parent = parent;
    }

    // getter/setter
    T getElement() const { return element; }
    void setElement(T element){element = element};

    BinaryNode<T> getLeft() const { return left; }
    set setLeft() const { this->left = left; }

    BinaryNode<T> getRight() const { return left; }
    set setRight() const { this->right = right; }
};