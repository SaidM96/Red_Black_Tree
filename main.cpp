#include "RedBlackTree.hpp"

int main()
{
    RBT tree;

    tree.InsertNode(5);
    tree.InsertNode(10);
    tree.InsertNode(3);

    if (tree.Search(10))
        std::cout << "10 is found\n";
    if (tree.Search(5))
        std::cout << "5 is found\n";
    if (tree.Search(7))
        std::cout << "7 is found\n";
}
