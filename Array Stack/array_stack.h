#ifndef ARRAY_STACK
#define ARRAY_STACK


typedef struct s {
	int boyut;
	int tepe;
	int *array;
}stack;

int pop(stack *);
stack * tanimla();
void yazdir(stack *);
void push(int, stack *);

#endif
