#ifndef INT_NODE
#define INT_NODE

#include <stdlib.h>

class SingleLinkedNode  {
    public:
    int data;
    SingleLinkedNode *next;
    SingleLinkedNode(int el, SingleLinkedNode* p = NULL)    {
        data = el;
        next = p;
    }
};

#endif
