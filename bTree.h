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
    };

    template<class T>
    class bTree {
        private:
        Node<T>* _head;
    };
}

#endif
