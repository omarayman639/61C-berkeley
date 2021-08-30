//prepend (add to the start) of a linked list

#include <stdio.h>

int prepend(struct ll_node **list, int value)
{
   struct ll_node *item = (struct ll_node *)
       malloc(sizeof(struct ll_node));
   item->value = value;
   item->next = *list;
   *list = item;

   return 0;
}