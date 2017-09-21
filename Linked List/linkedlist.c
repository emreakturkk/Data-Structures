#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void yazdir(node *r)
{

	while(r!=NULL)
	{
		printf("%d\n",r->x);
		r = r->nextPtr;
		printf("\n");
	}
}


void ekleDugum(node *r, int veri)
{
	while(r->nextPtr != NULL)
	{
		r = r->nextPtr;
	}

	r->nextPtr = (node*)malloc(sizeof(node));
	r->nextPtr->x = veri;
	r->nextPtr->nextPtr = NULL;
}


node * ekleDugum2(node *r, int veri)
{

	if(r == NULL)
	{
		r = (node*)malloc(sizeof(node));
		r->x = veri;
		r->nextPtr = NULL;
		return r;
	}
	else
	{
		node *iter = r;
		while(iter->nextPtr != NULL)
			iter = iter->nextPtr;
		iter -> nextPtr = (node*)malloc(sizeof(node));
		iter -> nextPtr -> x = veri;
		iter->nextPtr->nextPtr = NULL;
		return r;
	}
}

node * ekleSirali(node *r, int veri)
{
	if(r == NULL)
	{
		r = (node*)malloc(sizeof(node));
		r->x = veri;
		r->nextPtr = NULL;
		return r;
	}

	if(r->x > veri)
	{
		node *temp = (node*)malloc(sizeof(node));
		temp->x = veri;
		temp->nextPtr = r;
		r = temp;
		return r;
	}

	node *iter = r;

	while(iter->nextPtr != NULL && iter->nextPtr->x < veri)
	{
		iter = iter->nextPtr;
	}

	node *temp = (node*)malloc(sizeof(node));
	temp->nextPtr = iter->nextPtr;
	iter->nextPtr = temp;
	temp->x = veri;

	return r;

}

node *dugumSil(node *r, int veri)
{
	node *iter = r;
	node *temp;
	if(r->x == veri)
	{
		temp = r;
		r = r->nextPtr;
		free(temp);
		return r;
	}

	while(iter->nextPtr->x != veri && iter->nextPtr != NULL)
	{
		iter = iter->nextPtr;
	}

	if(iter->nextPtr == NULL)
	{
		printf("ERROR");
		return r;
	}

	temp = iter->nextPtr;
	iter->nextPtr = iter->nextPtr->nextPtr;
	free(temp);

	return r;

}
