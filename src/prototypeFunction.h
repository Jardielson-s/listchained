
struct list{

 int value;
 struct list *next;

};

typedef struct list node;


node *ini = NULL;

void menu();
int insert(int v);
void print();
int remove_start();
node *sarch(int v);
int remove_data(int v);
