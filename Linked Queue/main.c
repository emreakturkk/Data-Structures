#include <stdio.h>
#include <stdlib.h>
#include "linked_queue.h"
/*typedef struct n{
	int data;
	struct n *next;
}node;
*/
/*
node * root = NULL;
node * son = NULL;

void enqueue(int data)
{
	if(root == NULL)
	{
		root = (node*)malloc(sizeof(node));
		root->data = data;
		root->next =NULL;
		son = root;
	}
	else{
		son->next = (node*)malloc(sizeof(node));
		son->next->data = data;
		son = son->next;
		son->next = NULL;
	}
	
}

int dequeue()
{
	if(root == NULL)
	{
		printf("Linedlist bos");
		return -1;
	}
	int value = root->data;
	node *temp = root;
	root = root->next;
	free(temp);
	return value;
	
}*/

int main(int argc, char **argv)
{
	node *s = NULL;
	s = enqueue(s,10);
	s = enqueue(s,20);
	s = enqueue(s,30);
	printf("%d\n",dequeue(s));
	printf("%d\n",dequeue(s));
	
	return 0;
}
