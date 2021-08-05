#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    // the link to the next node in the list
    struct node *next;
}
node;

int main (void)
{
    node *list = NULL; // временна променлива list има достъп до node
    
    node *n = malloc(sizeof(node)); //n is a pointer, that means it's holding a memory address. 
    if(n == NULL)
    {
        return 1;
    }
    
    n -> number = 1;
    n -> next = NULL;
    
    list = n;
    
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        return 1;
    }
    
    n -> number = 2;
    n -> next = NULL;
    list->next = n;
    
    n = malloc(sizeof(node));
    if(n == NULL)
    {
        free(list->next);
        free(list);
        return 1;
    }
    
    n -> number = 3;
    n -> next = NULL;
    list->next->next = n;
    
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }
    
     while (list != NULL)
    {
        // We point to the next node first
        node *tmp = list->next;
        // Then, we can free the first node
        free(list);
        // Now we can set the list to point to the next node
        list = tmp;
        // If list is null, when there are no nodes left, our while loop will stop
    }
}
