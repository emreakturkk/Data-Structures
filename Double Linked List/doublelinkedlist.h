typedef struct dugum{
	int x;
	struct dugum *next;
	struct dugum *prev;
}node;

void yazdir(node *r);
node * ekleSirali(node *r, int veri);
node * dugumSil(node *r, int veri);
