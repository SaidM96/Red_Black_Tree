# Red_Black_Tree - C++ Red-Black Tree Implementation

![C++](https://img.shields.io/badge/C%2B%2B-98-blue)

## Introduction

The "Red_Black_Tree" project is a C++ implementation of the Red-Black Tree data structure. Red-Black Tree is a type of self-balancing binary search tree, where each node is colored red or black to ensure that the tree remains balanced during insertions and deletions. The Red-Black Tree provides efficient operations for insertion, deletion, and search, with guaranteed logarithmic time complexity.

## Features

The Red_Black_Tree implementation provides the following features:

- **Insertion:** Efficient insertion of new elements while maintaining the Red-Black Tree properties.
- **Deletion:** Proper handling of element deletion, ensuring the tree remains balanced.
- **Searching:** Fast search operation to find elements in the tree.
- **Balancing:** Automatic balancing of the tree during insertions and deletions to keep it self-balanced.

## Compiling

To compile the "Red_Black_Tree" project, follow these steps:

1. Clone the project repository to your local machine.
2. Navigate to the project directory.
3. Compile the code using `c++` with the flags `-Wall -Wextra -Werror`.

```bash
g++ -Wall -Wextra -Werror main.cpp RedBlackTree.hpp -o red_black_tree
```

## Usage

To use the "Red_Black_Tree" in your C++ projects, follow these steps:

1. Download the "RedBlackTree.hpp" header file and place it in your project directory.

2. Include the "RedBlackTree.hpp" header in your C++ source file where you want to use the Red-Black Tree.

3. Create an instance of the `ft::RedBlackTree` class with the desired data type. The Red-Black Tree is implemented as a template class, allowing you to store any data type in the tree.

   ```cpp
   #include "RedBlackTree.hpp"
   
   int main() {
       // Create a Red-Black Tree to store integers
       ft::RedBlackTree<int> rbt;
   
       // Insert elements into the tree
       rbt.insert(10);
       rbt.insert(5);
       rbt.insert(20);
   
       // Search for an element in the tree
       if (rbt.search(5)) {
           std::cout << "Element 5 found in the tree." << std::endl;
       } else {
           std::cout << "Element 5 not found in the tree." << std::endl;
       }
   
       // Delete an element from the tree
       rbt.remove(10);
   
       return 0;
   }
   ```
