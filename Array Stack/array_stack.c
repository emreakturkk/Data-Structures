#include <stdio.h>
#include <stdlib.h>
#include "array_stack.h"


stack * tanimla()
{
	stack *s = (stack*)malloc(sizeof(stack));
	s->array = NULL;
	s->boyut = 2;
	s->tepe = 0;
	return s;

}
void yazdir(stack *s)
{
	if(s->array == NULL)
		printf("DIZI BOS\n");
	else
	{
		int i;
		printf("boyut: %d\n",s->boyut);
		for(i = 0; i<s->tepe; i++){
			printf("%d\n",s->array[i]);
		}
	}
}

int pop(stack *s)
{
	if(s->tepe <= 0 && s->array == NULL)
	{
		printf("DIZI BOS\n");
		return -1;
	}

	if(s->tepe <= s->boyut/4){
		int *array2 = (int*)malloc(sizeof(int)*s->boyut/2);
		int i;
		for(i = 0; i<s->tepe;i++)
			array2[i] = s->array[i];
		free(s->array);
		s->array = array2;
		s->boyut /= 2;

	}
	return s->array[-- s->tepe];
}

void push(int val, stack *s){

	if(s->array == NULL)
	{
		s->array = (int*)malloc(sizeof(int)*s->boyut);
	}
	if(s->tepe >= s->boyut-1){
		int *array2 = (int*)malloc(sizeof(int)*s->boyut*2);
		int i;
		for(i = 0; i<s->boyut;i++)
			array2[i] = s->array[i];
		int *temp = s->array;
		free(temp);
		s->array = array2;
		s->boyut *= 2;

	}
	s->array[s->tepe++] = val;
}
