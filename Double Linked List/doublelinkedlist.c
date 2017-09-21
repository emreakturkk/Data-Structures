#include <stdio.h>
#include <stdlib.h>
#include "doublelinkedlist.h"

void yazdir(node *r)
{
	while(r != NULL)
	{
		printf("%d\n",r->x);
		r = r->next;
	}
}

node * ekleSirali(node *r, int veri)
{
	if(r == NULL)
	{
		r = (node*)malloc(sizeof(node));
		r->x = veri;
		r->next = NULL;
		r->prev = NULL;
		return r;
	}

	if (r->x > veri)
	{
		node *temp = (node*)malloc(sizeof(node));
		temp->x = veri;
		temp->next = r;
		r->prev = temp;
		temp->prev = NULL;
		return temp;
	}
	node *temp = (node*)malloc(sizeof(node));
	node *iter = r;
	while(iter->next != NULL && iter->next->x < veri)
		iter = iter->next;

	temp->x = veri;
	temp->next = iter->next;
	iter->next = temp;
	temp->prev = iter;
	if (iter->next != NULL)
		iter->next->prev = temp;
	return r;
}

node * dugumSil(node *r, int veri)
{
	node *iter = r;
	node *temp;
	if(r->x == veri)
	{
		temp = r;
		r = r->next;
		r->prev = NULL;
		free(temp);
		return r;
	}

	while(iter->next->x != veri && iter->next != NULL)
	{
		iter = iter->next;
	}

	if(iter->next== NULL)
	{
		printf("ERROR");
		return r;
	}

	temp = iter->next;
	iter->next = temp->next;
	if (iter->next != NULL)
		iter->next->prev = temp;
	free(temp);
	return r;

}
