#include <stdio.h>
#include <stdlib.h>
#include "circlelinkedlist.h"

void yazdir(node *r)
{
	node *iter = r;
	printf("%d\n",iter->x);
	iter = iter->nextPtr;

	while(iter != r)
	{
		printf("%d\n",iter->x);
		iter = iter->nextPtr;
	}
	printf("\n");
}

void ekleDugum(node *r, int veri)
{
	node *iter = r;
	while(iter->nextPtr != r)
	{
		iter = iter->nextPtr;
	}

	iter->nextPtr = (node*)malloc(sizeof(node));
	iter->nextPtr->x = veri;
	iter->nextPtr->nextPtr = r;
}

node * ekleSirali(node *r, int veri)
{
	if(r == NULL)
	{
		r = (node*)malloc(sizeof(node));
		r->x = veri;
		r->nextPtr = r;
		return r;
	}

	if(r->x > veri)
	{
		node *temp = (node*)malloc(sizeof(node));
		temp->x = veri;
		temp->nextPtr = r;
		node *iter = r;
		while(iter->nextPtr != r)
			iter = iter->nextPtr;
		iter->nextPtr = temp;
		return temp;
	}

	node *iter = r;

	while(iter->nextPtr != r && iter->nextPtr->x < veri)
	{
		iter = iter->nextPtr;
	}

	node *temp = (node*)malloc(sizeof(node));
	temp->nextPtr = iter->nextPtr;
	iter->nextPtr = temp;
	temp->x = veri;

	return r;

}

node * dugumSil(node *r, int veri)
{
	node *iter = r;
	node *temp;
	if(r->x == veri)
	{
		while(iter->nextPtr != r)
			iter = iter->nextPtr;
		iter->nextPtr = r->nextPtr;
		temp = r;
		r = r->nextPtr;
		free(temp);
		return r;
	}

	while(iter->nextPtr->x != veri && iter->nextPtr != r)
	{
		iter = iter->nextPtr;
	}

	if(iter->nextPtr == r)
	{
		printf("ERROR");
		return r;
	}

	temp = iter->nextPtr;
	iter->nextPtr = iter->nextPtr->nextPtr;
	free(temp);
	return r;

}
