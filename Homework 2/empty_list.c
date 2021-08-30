
//empty entire linked list

#include <stdio.h>

int free_ll(struct ll_node **list)
{
   if (*list)
   {
      free_ll(&((*list)->next));
      free(*list);
   }
   *list = NULL;

   return 0;
}