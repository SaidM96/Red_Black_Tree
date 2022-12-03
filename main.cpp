#include "RedBlackTree.hpp"

int main()
{
    RBT tree;

    tree.InsertNode(10);
    tree.InsertNode(5);
    tree.InsertNode(3);
    tree.InsertNode(15);
    tree.InsertNode(12);
    tree.InsertNode(23);

    tree.InsertNode(17);
    tree.InsertNode(35);
    tree.InsertNode(65);
    tree.InsertNode(45);
    tree.InsertNode(1);
    tree.InsertNode(14);
    tree.print_tree(tree.get_root());

    std::cout << "size tree : " << tree.get_size() << std::endl;
    if (tree.Search(10))
        std::cout << "10 is found\n";
    if (tree.Search(5))
        std::cout << "5 is found\n";
    if (!tree.Search(7))
        std::cout << "7 is not found\n";
}
