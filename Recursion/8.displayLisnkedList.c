#include <stdio.h>
void DisplayR(PNODE first)
{
  if (first!=NULL)
  {
    first = first->next;
    DisplayR(first);
  }
}
