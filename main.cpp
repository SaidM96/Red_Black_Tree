#include "RedBlackTree.hpp"

int main()
{
    RBT tree;

    tree.InsertNode(10);
    std::cout << "size tree : " << tree.get_size() << std::endl;

    tree.InsertNode(23);
        std::cout << "size tree : " << tree.get_size() << std::endl;

    tree.InsertNode(17);
        std::cout << "size tree : " << tree.get_size() << std::endl;

    tree.InsertNode(35);
        std::cout << "size tree : " << tree.get_size() << std::endl;

    tree.InsertNode(65);
        std::cout << "size tree : " << tree.get_size() << std::endl;

    tree.InsertNode(45);
        std::cout << "size tree : " << tree.get_size() << std::endl;

    tree.InsertNode(1);

    std::cout << "size tree : " << tree.get_size() << std::endl;
    tree.InsertNode(14);
        std::cout << "size tree : " << tree.get_size() << std::endl;

    tree.InsertNode(5);

    std::cout << "size tree : " << tree.get_size() << std::endl;
    tree.InsertNode(11);
        std::cout << "size tree : " << tree.get_size() << std::endl;
    
	tree.InsertNode(15);
        std::cout << "size tree : " << tree.get_size() << std::endl;

    tree.InsertNode(12);
        std::cout << "size tree : " << tree.get_size() << std::endl;


    tree.print_tree(tree.get_root());
	std::cout << "delete node : 10\n" ;
	tree.delete_node(10);
        std::cout << "size tree : " << tree.get_size() << std::endl;

    // tree.print_tree(tree.get_root());

	// tree.print_tree(tree.get_root());
	std::cout << "delete node : 23\n" ;
    tree.delete_node(23);
        std::cout << "size tree : " << tree.get_size() << std::endl;

	    // tree.print_tree(tree.get_root());
	std::cout << "delete node : 17\n" ;
    tree.delete_node(17);
        std::cout << "size tree : " << tree.get_size() << std::endl;

	    // tree.print_tree(tree.get_root());
	std::cout << "delete node : 35\n" ;
    tree.delete_node(35);
        std::cout << "size tree : " << tree.get_size() << std::endl;

	    // tree.print_tree(tree.get_root());
	std::cout << "delete node : 65\n" ;
    tree.delete_node(65);
        std::cout << "size tree : " << tree.get_size() << std::endl;

	    // tree.print_tree(tree.get_root());
	std::cout << "delete node : 45\n" ;
    tree.delete_node(45);
        std::cout << "size tree : " << tree.get_size() << std::endl;

	    // tree.print_tree(tree.get_root());
	std::cout << "delete node : 1\n" ;
    tree.delete_node(1);

    std::cout << "size tree : " << tree.get_size() << std::endl;
    // tree.print_tree(tree.get_root());
	std::cout << "delete node : 14\n" ;
    tree.delete_node(14);
        std::cout << "size tree : " << tree.get_size() << std::endl;

	    // tree.print_tree(tree.get_root());
	std::cout << "delete node : 5\n" ;
    tree.delete_node(5);

    std::cout << "size tree : " << tree.get_size() << std::endl;
    // tree.print_tree(tree.get_root());
	std::cout << "delete node : 11\n" ;
    tree.delete_node(11);
        std::cout << "size tree : " << tree.get_size() << std::endl;

	    // tree.print_tree(tree.get_root());
	std::cout << "delete node : 15\n" ;
    tree.delete_node(15);
        std::cout << "size tree : " << tree.get_size() << std::endl;

	    // tree.print_tree(tree.get_root());
	std::cout << "delete node : 12\n" ;
    tree.delete_node(12);
    std::cout << "size tree : " << tree.get_size() << std::endl;

	    tree.print_tree(tree.get_root());

    // std::cout << "size tree : " << tree.get_size() << std::endl;
    // if (tree.Search(10) != tree.get_NIL())
    //     std::cout << "10 is found\n";
    // if (tree.Search(5) != tree.get_NIL())
    //     std::cout << "5 is found\n";
    // if (tree.Search(17) != tree.get_NIL())
    //     std::cout << "17 is  found\n";
    // tree.print_tree(tree.get_root());
    // tree.delete_node(10);
        // std::cout << "size tree : " << tree.get_size() << std::endl;

    // if (tree.Search(10) == tree.get_NIL())
    //     std::cout << "10 is not found\n";

}
