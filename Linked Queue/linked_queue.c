#include <stdio.h>
#include <stdlib.h>
#include "linked_queue.h"

node * enqueue(node *root, int data)
{
	node *son;
	if(root == NULL)
	{
		root = (node*)malloc(sizeof(node));
		root->data = data;
		root->next =NULL;
		son = root;
		return root;
	}
	else{
		son->next = (node*)malloc(sizeof(node));
		son->next->data = data;
		son = son->next;
		son->next = NULL;
		return root;
	}
}

int dequeue(node *root)
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
	
}
void yazdir(node *root)
{
	node *iter = root;
	while(iter != NULL)
	{
		printf("%d\n",iter->data);
		iter = iter->next;
	}	
	
}