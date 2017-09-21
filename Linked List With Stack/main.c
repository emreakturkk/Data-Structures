#include <stdio.h>
#include "linkedlist_stack.h"

int main(int argc, char **argv)
{
	node *s1 = NULL;
	s1 = push(s1,10);
	s1 = push(s1,20);
	s1 = push(s1,30);
	yazdir(s1);
	printf("-----------------------\n");
	printf("%d\n",pop(s1));
	printf("-----------------------\n");
	yazdir(s1);
	printf("-----------------------\n");
	printf("%d\n",pop(s1));
	printf("-----------------------\n");
	yazdir(s1);
	printf("-----------------------\n");
	printf("%d\n",pop(s1));
	printf("-----------------------\n");
	yazdir(s1);
	printf("%d\n",pop(s1));
	
	return 0;
}
