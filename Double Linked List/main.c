#include <stdio.h>
#include <stdlib.h>
#include "doublelinkedlist.h"

int main(int argc, char **argv)
{
	node *root;
	root = NULL;

	root = ekleSirali(root,200);
	root = ekleSirali(root,50);
	root = ekleSirali(root,150);
	root = ekleSirali(root,500);
	root = ekleSirali(root,150);
	//ekleSirali(root,150);
	yazdir(root);
	printf("\n");

	root = dugumSil(root,50);
	root = dugumSil(root,150);
	//root = dugumSil(root,80);
	yazdir(root);
	return 0;
}
