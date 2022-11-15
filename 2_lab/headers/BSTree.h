#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <stack>

typedef unsigned int uint;
using namespace std;

template <typename K, typename V>
struct Node {
    V value;
    K key;
    Node* left;
    Node* right;
    Node(V value, K key) {
        this->value = value;
        this->key = key;
    }
};

template <typename K, typename V>
class BSTree {
    public:
        BSTree() {}
        BSTree(const BSTree& copy);
        ~BSTree(){}
        uint getSize();
        bool clear();
        bool isEmpty();
        V get(K key);
        bool set(V value, K key);
        V insert(V value, K key);
        bool remove(K key);
        string printKeys();
        void printTree();
        int getLookedElemCount();

    private:
        uint size;
        int l_elem_c = 0;
        Node<K, V>* root;
};