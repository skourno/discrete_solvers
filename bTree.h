#pragma once

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

namespace bTree
{
    template<class T>
    class Node
    {
        T *data;

        public:
        Node* left;
        Node* right;

        Node(T &data_in)
        {
            data  = &data_in;
            left  = nullptr;
            right = nullptr;
        }

        T get_data() {
            return *data;
        }

        void add_node_left (Node<T>* node) {
            left = node;
        }

        void add_node_right (Node<T>* node) {
            right = node;
        }
    };

    template<class T>
    class bTree {
        private:
        Node<T>* _head;

        public:
        bTree () {
            _head = nullptr;
        }
        bTree (T &data_head){
            _head = new Node<int>(data_head); 
        }

        void delete_node(Node<T>* node) {
            if (node->left) delete_node(node->left);
            if (node->right) delete_node(node->right);
            delete node;
            node = nullptr;
        }

        ~bTree() {
            delete_node(_head);
        } 

        Node<T>* get_head() {
            return _head;
        }
    };
}

#endif
