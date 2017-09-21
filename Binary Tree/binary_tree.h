
typedef struct n {
    int veri;
    struct n *sol;
    struct n *sag;
}node;

node *ekle(node *s, int veri);
int arama(node *s, int veri);
void inorder(node *agac);
void preorder(node *agac);
void postorder(node *agac);
