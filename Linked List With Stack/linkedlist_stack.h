#ifndef linkedlist_stack
#define linkedlist_stack

typedef struct n
{
	int data;
	struct n *next;
}node;

int pop(node *);
node * push(node *, int); 
void yazdir(node *);
#endif