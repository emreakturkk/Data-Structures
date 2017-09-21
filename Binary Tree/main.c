#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"

int main(int argc, char **argv)
{
	node *agac = NULL;
	agac = ekle(agac,8);
	agac = ekle(agac,6);
	agac = ekle(agac,10);
	agac = ekle(agac,9);
	agac = ekle(agac,11);
	agac = ekle(agac,5);
	agac = ekle(agac,7);
	printf("\n--------inorder----------\n");
	inorder(agac);
	printf("\n---------preorder---------\n");
	preorder(agac);
	printf("\n----------postorder--------\n");
	postorder(agac);
	printf("\n------------------\n");
	arama(agac,20);
	return 0;
}
