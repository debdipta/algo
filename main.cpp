#include <stdio.h>
#include <stdlib.h>

#include "SingleList001.h"

int main(int argc, char* argv[])
{
    int count = 0;
    SingleLinkedList *list = NULL;

    printf("Hello Debdipta...\n");
    if (argc < 2)   {
        printf("Add elements in parameter...\n");
        exit(0);
    }
    list = new SingleLinkedList();
    list->CreateList(argc, argv);
    list->PrintList();
    list->GetMiddle();
    
    if (NULL != list)   {
        delete list;
        list = NULL;
    }
    return 0;
}
