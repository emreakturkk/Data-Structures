#include <stdio.h>
#include <stdlib.h>
#include "linkedlist_stack.h"

node * push(node *root, int data)
{
	if(root == NULL)
	{
		root = (node *)malloc(sizeof(node));
		root->data = data;
		root->next = NULL;
		return root;
	}
	node* iter = root;
	while(iter->next != NULL)
		iter = iter->next;
	node * temp = (node*)malloc(sizeof(node));
	iter->next = temp;
	temp->data = data;
	temp->next = NULL;
	return root;
}
int pop(node *root)
{
	int value;
	if(root == NULL)
	{
		printf("stack bos");
		return -1;
	}
	if(root->next == NULL)
	{
		value = root->data;
		node *temp = NULL;
		free(root);
		root = temp;
		return value;
	}
	node * iter = root;
	while(iter->next->next != NULL)
		iter = iter->next;
	node * temp = iter->next;
	value = temp->data;
	iter->next = NULL;
	free(temp);
	return value;
	
}

void yazdir(node *root)
{
	if(root == NULL)
		printf("Stack BOS");
	while(root != NULL)
	{
		printf("%d\n",root->data);
		root = root->next;
	}
	
}
