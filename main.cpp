#include "RedBlackTree.hpp"

int main()
{
    RBT tree;

    tree.InsertNode(10);
    tree.InsertNode(23);
    tree.InsertNode(17);
    tree.InsertNode(35);
    tree.InsertNode(65);
    tree.InsertNode(45);
    tree.InsertNode(1);
    tree.InsertNode(14);
    tree.InsertNode(5);
    tree.InsertNode(11);    
	tree.InsertNode(15);
    tree.InsertNode(12);

    // tree.print_tree(tree.get_root());
	// std::cout << "delete node : 10\n" ;
	// tree.delete_node(10);
	// tree.print_tree(tree.get_root());
	std::cout << "delete node : 23\n" ;
    tree.delete_node(23);
	    tree.print_tree(tree.get_root());
	// std::cout << "delete node : 17\n" ;
    // tree.delete_node(17);
	//     tree.print_tree(tree.get_root());
	// std::cout << "delete node : 35\n" ;
    // tree.delete_node(35);
	//     tree.print_tree(tree.get_root());
	// std::cout << "delete node : 65\n" ;
    // tree.delete_node(65);
	//     tree.print_tree(tree.get_root());
	// std::cout << "delete node : 45\n" ;
    // tree.delete_node(45);
	//     tree.print_tree(tree.get_root());
	// std::cout << "delete node : 1\n" ;
    // tree.delete_node(1);
    // tree.print_tree(tree.get_root());
	// std::cout << "delete node : 14\n" ;
    // tree.delete_node(14);
	//     tree.print_tree(tree.get_root());
	// std::cout << "delete node : 5\n" ;
    // tree.delete_node(5);
    // tree.print_tree(tree.get_root());
	// std::cout << "delete node : 11\n" ;
    // tree.delete_node(11);
	//     tree.print_tree(tree.get_root());
	// std::cout << "delete node : 15\n" ;
    // tree.delete_node(15);
	//     tree.print_tree(tree.get_root());
	// std::cout << "delete node : 12\n" ;
    // tree.delete_node(12);
	//     tree.print_tree(tree.get_root());

    // std::cout << "size tree : " << tree.get_size() << std::endl;
    // if (tree.Search(10))
    //     std::cout << "10 is found\n";
    // if (tree.Search(5))
    //     std::cout << "5 is found\n";
    // if (tree.Search(17))
    //     std::cout << "17 is  found\n";
    // tree.delete_node(10);
    // if (!tree.Search(10))
    //     std::cout << "10 is not found\n";
    // tree.print_tree(tree.get_root());

}
