#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main()
{
	/*1
	node *root;
	root = (node*)malloc(sizeof(node));
	root->x = 10;
	root->nextPtr = (node*)malloc(sizeof(node));
	root->nextPtr->x = 20;
	root->nextPtr->nextPtr = NULL;
	ekleDugum(root,30);
	yazdir(root);
	*/

	/*2
	node *root;
	root = NULL;

	root = ekleDugum2(root,10);
	root = ekleDugum2(root,20);
	yazdir(root);
	*/

	node *root = NULL;

	root = ekleSirali(root,400);
	root = ekleSirali(root,300);
	root = ekleSirali(root,200);
	root = ekleSirali(root,100);
	root = ekleSirali(root,150);
	root = ekleSirali(root,500);
	root = dugumSil(root,100);
	yazdir(root);
	return 0;

}
