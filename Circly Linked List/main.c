// Dairesel Bağlı Liste

#include <stdio.h>
#include <stdlib.h>
#include "circlelinkedlist.h"

int main()
{
	/*
	node *root;
	root = (node*)malloc(sizeof(node));
	root->x = 10;
	root->nextPtr = (node*)malloc(sizeof(node));
	root->nextPtr->x = 20;
	root->nextPtr->nextPtr = root;
	ekleDugum(root,30);
	ekleDugum(root,15);
	ekleDugum(root,45);
	ekleDugum(root,13);
	yazdir(root);
	printf("\n");
	*/

	node *root = NULL;

	root = ekleSirali(root,400);
	root = ekleSirali(root,400);
	root = ekleSirali(root,200);
	root = ekleSirali(root,100);
	root = ekleSirali(root,150);
	root = ekleSirali(root,500);
	root = ekleSirali(root,600);
	root = ekleSirali(root,150);
	yazdir(root);

	return 0;
}
