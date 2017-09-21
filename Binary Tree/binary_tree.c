#include <stdio.h>
#include <stdlib.h>
#include "binary_tree.h"
node * ekle(node *s, int veri)
{
	if(s == NULL)
	{
		node *root = (node*)malloc(sizeof(node));
		root->veri = veri;
		root->sag = NULL;
		root->sol = NULL;
		return root;
	}

	if(s->veri < veri)
	{
		s->sag = ekle(s->sag,veri);
		return s;
	}

	else
	{
		s->sol = ekle(s->sol,veri);
		return s;
	}

}

int arama(node *s,int veri)
{
	if(s == NULL)
		return -1;
	if(s->veri == veri)
		return 1;
	if((arama(s->sol,veri)) == 1)
		printf("%d BULUNDU",veri);
	if((arama(s->sag,veri)) == 1)
		printf("%d BULUNDU",veri);
}
void inorder(node *agac)
{

	if(agac->sol != NULL)
		inorder(agac->sol);

	printf("%d\n",agac->veri);

	if(agac->sag != NULL)
		inorder(agac->sag);
}
void preorder(node *agac)
{

	printf("%d\n",agac->veri);
	if(agac->sol != NULL)
		preorder(agac->sol);

	if(agac->sag != NULL)
		preorder(agac->sag);
}
void postorder(node *agac)
{

	if(agac->sol != NULL)
		postorder(agac->sol);

	if(agac->sag != NULL)
		postorder(agac->sag);

	printf("%d\n",agac->veri);
}
