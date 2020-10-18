#include<stdio.h>
#include<stdlib.h>
#include "function.c"


struct list{

 int value;
 struct list *next;

};
typedef struct list node;

node *ini = NULL;

void menu(){
printf("\n\t 1- insert value");
printf("\n\t 2- show list");

}

void create_list(){
  ini = NULL;
}

int insert(int v){

 node *p;
 p= (node*)malloc(sizeof(node));
 if(p == NULL)
 {
  printf("\n\t err to alocation!!!");
  return 0;
 }

 p->value = v;
 p->next = NULL;

 if(ini == NULL)
 {
   ini = p;
 }
 else
 {
   p->next = ini;
   ini = p;
 }

 return 1;
}

void print(){

  node *p;

  if(ini == NULL)
  {
    printf("\n\t----end of list----");
    return;
  }

  p = ini;
  while(p != NULL)
  {
   printf("\n\t info = %d\n",p->value);
   p = p->next;
  }
  printf("\n\t----end list----");
}



int main(){


int op,v,aux;
 do{

  menu();
  printf("\n\t choose option:\t");
  scanf("%d",&op);

  switch(op){
   case 1:
     printf("\n\t type it value:\t");
     scanf("%d",&v);
     aux = insert(v);
     if(aux == 0)
     {
      printf("\n\t element not insert");
     }
     else
     {
      printf("\n\t element insert");
     }
     break;
   case 2:
     print();
     break;
  }
 }while(op != 0);

return 0;
}
