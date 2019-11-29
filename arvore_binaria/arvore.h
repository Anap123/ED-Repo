struct node{
    int v;
    struct node* esq;
    struct node* dir;
};

typedef struct node node;

typedef struct{
    node *root;
}arvore;

node *criaArvore(int v);

void insertValue(node *root, int val);

node *findValue(node *p, int val);

void printTree(node *root);

int getHeight(node *root);

node *removeValue(int val, node *root);

int size(node *root);

int sumX(node *root, int x);

