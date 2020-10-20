typedef struct list node;

struct list{

 int value;
 struct list *next;

};

node *ini = NULL;

void menu();
int insert(int v);
void print();
int remove_start();
node *sarch(int v);
int remove_data(int v);
