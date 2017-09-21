typedef struct dugum {
	int x;
	struct dugum *nextPtr;
}node;

void yazdir(node *r);
void ekleDugum(node *r, int veri);
node * ekleDugum2(node *r, int veri);
node * ekleSirali(node *r, int veri);
node *dugumSil(node *r, int veri);
