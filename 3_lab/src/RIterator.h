#include "Node.h"
#include <vector>
#include <stack>

using namespace std;

template<typename K, typename V>
class RIterator {
    public:

        RIterator() {
            size = 0;
            index = -1;
            root = nullptr;
        }

        RIterator (Node<K, V>* root, int index, uint size) {
            this->size = size;
            this->root = root;
            this->index = index;
            if (root)
                fill();
        }

        RIterator& operator++() {
             index--;
             return *this;
        }
        
        RIterator& operator--() {
            index++;
            if (index == size) index = -1;
            return *this;
        }

        bool operator==(const RIterator& iterator) {
            return this->index == iterator.index;
        }

        bool operator!=(const RIterator& iterator) {
            return this->index != iterator.index;
        }

        Node<K,V>* operator*() {
            return vc[index];
        }

    private:

        void fill() {

        }
        uint size;
        int index;
        vector<Node<K, V> *> vc;
        Node<K, V>* root;
};