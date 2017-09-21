#ifndef linked_queue
#define linked_queue

typedef struct n{
	int data;
	struct n *next;
}node;

node * engueue(node *,int);
int dequeue(node *);
void yazdir(node *);
#endif