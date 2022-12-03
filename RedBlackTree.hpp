/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RedBlackTree.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:14:48 by smia              #+#    #+#             */
/*   Updated: 2022/12/03 15:40:55 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

enum Color{
    BLACK,RED
};

class node
{
    public:
        int     _data;
        Color   _color;
        node*   _parent; // parent to node
        node*   _right;  // right childe 
        node*   _left; // left childe
        // constructer
        node()
        {
            
        }
        node(node* parent, node* right, node* left, Color color, int data) : _parent(parent), _right(right), _left(left), _color(color) 
        { 
            _data = data;   
        }
        // ~node()
        // {
        //     delete 
        // }
};


class RBT
{
    private:
        node* root;
        node* NIL;
        int   size;
    public:
        RBT() : size(0)
        {
            NIL = new node(NULL, NULL, NULL, BLACK, 0);
            root = NIL;
        }
        ~RBT()
        {
            //clear_tree
            delete NIL;
        }
         
        node* get_root(void) const
        {
            return this->root;
        }
        node* get_NIL(void) const { return this->NIL;}
        int get_size(void) const { return this->size;}
        
        node* get_grandpa(node* Node) const
        {
            if (Node != this->NIL && Node->_parent != this->NIL && Node->_parent->_parent != this->NIL)
                return (Node->_parent->_parent);    
            return (this->NIL);
        }
        // to know if Node is a left child of his parent or not 
        bool is_leftChild(node* Node) const
        {
            if (Node == NIL || Node->_parent == NIL || Node->_parent->_left == NIL)
                return false;
            if (Node == Node->_parent->_left)
                return true;
            return false;
        }
        
        node* get_sibling_node(node* Node) const
        {
            if (Node == NIL || Node->_parent == NIL || Node->_parent->_left == NIL || Node->_parent->_right == NIL)
                return NIL;
            bool side = is_leftChild(Node);
            if (side)
                return (Node->_parent->_right);
            else
                return (Node->_parent->_left);
        }
        
        node* get_uncle(node* Node) const
        {
            if (Node == NIL || Node->_parent == NIL)
                return NIL;
            return (get_sibling_node(Node->_parent));
        }
        
        
        // fix tree after an insertion
        void LeftRotation(node* Node)
        {
            node* ptr = Node->_right; // save right child of our Node
            
            Node->_right = ptr->_left; // move left childe of ptr to (right child of Node)
            if (ptr->_left != NIL)
                ptr->_left->_parent = Node;
            ptr->_parent = Node->_parent;
            if (Node->_parent == NIL)
                this->root = ptr;
            else
            {
                if (is_leftChild(Node))
                    Node->_parent->_left = ptr;
                else
                    Node->_parent->_right = ptr;
            }
            ptr->_left = Node;
            Node->_parent = ptr;
        }

        void RightRotation(node* Node) // case mirror
        {
            node* ptr = Node->_left; //  save left child of our Node
            Node->_left =  ptr->_right;
            if (ptr->_right != NIL)
                ptr->_right->_parent = Node;
            ptr->_parent = Node->_parent;
            if (Node->_parent == NIL)
                this->root = ptr;
            else
            {
                if (is_leftChild(Node))
                    Node->_parent->_left = ptr;
                else
                    Node->_parent->_right = ptr;
            }
            ptr->_right = Node;
            Node->_parent = ptr;
        }
            
        void    Fixtree(node* Node)
        {
            node* ptr;
            
            while(Node->_parent->_color == RED)
            {
                if (!is_leftChild(Node->_parent)) // check if parent of Node is a right child to his grandpa 
                {
                    ptr = get_uncle(Node);  // uncle is an left childe to grandpa;
                    if (ptr->_color == RED) // if unlce is red
                    {
                        ptr->_color = BLACK; 
                        Node->_parent->_color = BLACK;
                        (get_grandpa(Node))->_color = RED;
                        Node = get_grandpa(Node);
                    }
                    else // if uncle is BLACK; 
                    {
                        if (is_leftChild(Node)) // if Node is a left childe
                        {
                            Node = Node->_parent;
                            RightRotation(Node);
                        }
                        Node->_parent->_color = BLACK;
                        (get_grandpa(Node))->_color = RED;
                        LeftRotation(get_grandpa(Node));
                    }
                }
                else // then parent of Node is a left child to his grandpa 
                {
                    ptr = get_uncle(Node); // uncle is a right  childe ;
                    if (ptr->_color == RED)
                    {
                        ptr->_color = BLACK; 
                        Node->_parent->_color = BLACK;
                        (get_grandpa(Node))->_color = RED;
                        Node = get_grandpa(Node);
                    }
                    else
                    {
                        if (!is_leftChild(Node)) // if Node is a right childe
                        {
                            Node = Node->_parent;
                            LeftRotation(Node);
                        }
                        Node->_parent->_color = BLACK;
                        (get_grandpa(Node))->_color = RED;
                        RightRotation(get_grandpa(Node));
                    }
                }
                if (Node == this->root)
                    break ;
            }
            this->root->_color = BLACK;
        }

        // Insertion new Node as binary search tree insertion , and coloring it red
        // Recolor and Rotation
        void InsertNode(int data)
        {
            node* Node = new node(NIL, NIL, NIL,RED, data);
            node* pos = root; // pos start with root and go till we find position that we will insert new Node in
            node* hold = NIL; // hold parent of pos (node that we will insert in)
            while( pos != NIL)
            {
                hold = pos;
                if (Node->_data > pos->_data)
                {
                    pos = pos->_right;
                }
                else if (Node->_data < pos->_data)
                {
                    pos = pos->_left;
                }
                else
                {
                    delete Node;
                    return ;
                }
            }
            Node->_parent = hold; // new Node with his parent;
            this->size++;
            // link node in tree with new Node 
            if (hold == NIL) // it means tree is empty so we will insert new Node as root (black) , and there no need to fix anything
            {
                Node->_color = BLACK; 
                root = Node;
                return ;
            }
            else if (Node->_data >= hold->_data)
                hold->_right = Node;
            else
                hold->_left = Node;
            // if granparent is null or color of parent is black , so de don't have to do nothing 
            if (Node->_parent->_parent == NIL || Node->_parent->_color == BLACK)
            {
                return ;
            }
            // we need to fix tree
            Fixtree(Node);
        }

        bool Search(int data)  // we can also return a pointer to node in tree if data was found , else return NIL 
        {
            node* ptr = this->root;
            while (ptr != NIL)
            {
                if (data == ptr->_data)
                    return true;  // data is found i tree
                else if (data > ptr->_data)
                    ptr = ptr->_right;
                else
                    ptr = ptr->_left;
            }
            return false; // data is not found in tree;
        }

        void print_tree(node* root)
        {
            node* tmp = root;
            if (root != NIL)
                std::cout << root->_data <<  " color : " << root->_color << std::endl;
            if (root->_left != NIL)
                print_tree(root->_left);
            if (root->_right != NIL)
                print_tree(root->_right);
        }
         // Delete
        void delete_node(int data)
        {
            
        }
        
        // min , max    

        
};
