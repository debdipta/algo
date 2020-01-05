#ifndef SINGLE_LIST
#define SINGLE_LIST

#include "node.h"
#include <stdlib.h>

class SingleLinkedList  {

public:
    SingleLinkedList();
    ~SingleLinkedList();

    bool CreateList(int , char**);
    void PrintList();

    void GetMiddle();
private:
    SingleLinkedNode *head = NULL, *tail = NULL;
};

#endif
