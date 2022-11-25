#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
int main(void)
{
    list_t *h;
    list_t *nnn;
    list_t my_list = {"man", 5, NULL};
    size_t nelem;

    h = &my_list;
    nnn = malloc(sizeof(list_t));
    if (nnn == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("My_list");
    nnn->len = 5;
    nnn->next = h;
    h = nnn;
    nelem = print_list(h);
    printf("-> %lu datas\n", nelem);

    printf("\n");
    free(nnn->str);
    nnn->str = NULL;
    n = print_list(h);
    printf("-> %lu datas\n", nelem);

    free(nnn);
    return (0);
}
