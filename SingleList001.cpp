#include "node.h"
#include "SingleList001.h"

#include <stdlib.h>
#include <stdio.h>

SingleLinkedList::SingleLinkedList()
{
    head = tail = NULL;
}

SingleLinkedList::~SingleLinkedList()
{
    SingleLinkedNode *next= NULL, *current = head;
    
    while(current != NULL)   {
        next = current->next;
        printf("Deleting Node:%u Data:%d\n", current, current->data);
        delete current;
        current = next;
    }
    head = NULL;
}

void SingleLinkedList::PrintList()
{
    SingleLinkedNode *tmp = head;
    while(tmp != NULL)   {
        printf("Node:%u Data:%d\n", tmp, tmp->data);
        tmp = tmp->next;
    }
}


bool SingleLinkedList::CreateList(int argc, char* argv[])
{
    int count = 0;

    for (count = 0; count < argc-1; count++)  {
        SingleLinkedNode *p = new SingleLinkedNode(atoi(argv[count+1]));
        if (head == NULL)    {
           head = tail = p; 
        } else   {
            tail->next = p;
            tail = tail->next;
        }
    }

}

void SingleLinkedList::GetMiddle()
{
    SingleLinkedNode *fast_p, *slow_p;
    fast_p = slow_p = head;
    while( fast_p != NULL && fast_p->next != NULL) {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
    }
    printf("Middle Addr: %u Value: %d\n", slow_p, slow_p->data);
}
