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
        bTree (Node<T>* head) : _head(head) {}

        Node<T>* get_head() {
            return _head;
        }
    };
}

#endif
