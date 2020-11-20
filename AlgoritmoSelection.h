
typedef struct produto Produto;

typedef struct selection Selection;

Produto* novoProduto(int codigo, int valor);

Selection* create(int n);

void selectionSort(Selection *v);

int add(Selection *v, int codigo, float valor);

void imprimir(Selection *v);
