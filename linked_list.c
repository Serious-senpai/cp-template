#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct __linked_list_node
{
    int value;
    struct __linked_list_node *prev;
    struct __linked_list_node *next;
} __linked_list_node;

typedef struct linked_list
{
    int size;
    __linked_list_node *head;
    __linked_list_node *tail;
} linked_list;

linked_list *linked_list_new()
{
    linked_list *object = malloc(sizeof(linked_list));
    object->size = 0;
    object->head = object->tail = NULL;
    return object;
}

__linked_list_node *__linked_list_node_new(int value)
{
    __linked_list_node *object = malloc(sizeof(__linked_list_node));
    object->value = value;
    object->prev = object->next = NULL;
    return object;
}

void linked_list_push_front(linked_list *list, int value)
{
    __linked_list_node *node = __linked_list_node_new(value);
    if (list->size == 0)
    {
        list->head = list->tail = node;
    }
    else
    {
        node->next = list->head;
        list->head->prev = node;
        list->head = node;
    }

    list->size++;
}

void linked_list_push_back(linked_list *list, int value)
{
    __linked_list_node *node = __linked_list_node_new(value);
    if (list->size == 0)
    {
        list->head = list->tail = node;
    }
    else
    {
        node->prev = list->tail;
        list->tail->next = node;
        list->tail = node;
    }

    list->size++;
}

int linked_list_pop_front(linked_list *list)
{
    if (list->size == 0)
    {
        exit(1);
    }

    __linked_list_node *node = list->head;
    list->head = node->next;
    if (node->next != NULL)
    {
        node->next->prev = NULL;
    }

    int value = node->value;
    free(node);

    list->size--;
    return value;
}

int linked_list_pop_back(linked_list *list)
{
    if (list->size == 0)
    {
        exit(1);
    }

    __linked_list_node *node = list->tail;
    list->tail = node->prev;
    if (node->prev != NULL)
    {
        node->prev->next = NULL;
    }

    int value = node->value;
    free(node);

    list->size--;
    return value;
}
