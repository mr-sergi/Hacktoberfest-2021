// C program to remove duplicate nodes from
// the singly linked list

#include <stdio.h>
#include <stdlib.h>

//Self-referential structure to create the node.
typedef struct tmp {
    int item;
    struct tmp* next;
} Node;

//structure for creating the linked list.
typedef struct
    {
    Node* head;
    Node* tail;

} List;

//Initialize List
void initList(List* lp)
{
    lp->head = NULL;
    lp->tail = NULL;
}

//Create node and return the reference of it.
Node* createNode(int item)
{
    Node* nNode;

    nNode = (Node*)malloc(sizeof(Node));

    nNode->item = item;
    nNode->next = NULL;

    return nNode;
}

//Add a new item at the end of the list.
void addAtTail(List* lp, int item)
{
    Node* node;
    node = createNode(item);

    //if list is empty.
    if (lp->head == NULL) {
        lp->head = node;
        lp->tail = node;
    }
    else {
        lp->tail->next = node;
        lp->tail = lp->tail->next;
    }
}

//Add a new item at beginning of the list.
void addAtHead(List* lp, int item)
{
    Node* node;
    node = createNode(item);

    //if list is empty.
    if (lp->head == NULL) {
        lp->head = node;
        lp->tail = node;
    }
    else {
        node->next = lp->head;
        lp->head = node;
    }
}

//To print the list from start to end of the list.
void printList(List* lp)
{
    Node* node;

    if (lp->head == NULL) {
        printf("\nEmpty List");
        return;
    }

    node = lp->head;

    while (node != NULL) {
        printf("| %05d |", node->item);
        node = node->next;

        if (node != NULL)
            printf("--->");
    }
    printf("\n\n");
}

void dupDelete(List* lp)
{
    Node* current = lp->head;
    Node* index;
    Node* temp;

    while (current != NULL) {
        temp = current;

        index = current->next;

        while (index != NULL) {
            if (current->item == index->item)
                temp->next = index->next;
            else
                temp = index;
            index = index->next;
        }
        current = current->next;
    }
}

//Main function to execute program.
int main()
{
    List* lp;

    lp = (List*)malloc(sizeof(List));

    initList(lp);

    addAtTail(lp, 101);
    addAtTail(lp, 102);
    addAtTail(lp, 101);
    addAtTail(lp, 102);
    addAtTail(lp, 105);

    printf("List:\n");
    printList(lp);
    dupDelete(lp);

    printf("Updated List:\n");
    printList(lp);

    return 0;
}
