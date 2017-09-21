#include <stdio.h>
#include <stdlib.h>
#include "array_stack.h"

int main(int argc, char **argv)
{
	stack *s1;
	
	s1 = tanimla();
	
	push(10,s1);
	push(20,s1);
	push(20,s1);
	push(30,s1);
	push(40,s1);
	push(50,s1);
	yazdir(s1);
	printf("\n");
	pop(s1);
	pop(s1);
	pop(s1);
	pop(s1);
	pop(s1);
	yazdir(s1);
	
	return 0;
}