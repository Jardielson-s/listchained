#include<stdio.h>
#include<stdlib.h>



struct list{

 int value;
 struct list *next;

};
typedef struct list node;

node *ini = NULL;


void menu();
void create_list(){
  ini = NULL;
}

int insert(int v);
void print();
int remove_start();
node *sarch(int v);
int remove_data(int v);





int main(){


int op,v,aux,*aux1;
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
   case 3:
     remove_start();
     break;

   case 4:
     printf("\n\t type it value:\t");
     scanf("%d",&v);
     aux1 = sarch(v);
     printf("\n\t info = %d",*aux1);
     break;
   case 5:
     printf("\n\t type it value:\t");
     scanf("%d",&v);
     aux = remove_data(v);
     if(aux == 1)
      printf("\n\t value deleted");
     else
      printf("\n\t value not found");
     break;
  }
 }while(op != 0);

return 0;
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

void menu(){
printf("\n\t 1- insert value");
printf("\n\t 2- show list");
printf("\n\t 3- remove of start");
printf("\n\t 4- sarch of value");
printf("\n\t 5- delete the value");

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

int remove_start(){

 node *p;
 if(ini == NULL)
 {
   return 0;
 }
 else
 {
   p = ini;
   ini = ini->next;
   free(p);
   return 1;
 }
}

node *sarch(int v){

 node *p;
 if(ini == NULL)
 {
  return NULL;
 }

 p = ini;

 while(p != NULL)
 {
  if(p->value == v)
  {
   return(p);
  }
  else
  {
   p = p->next;
  }
 }
 return NULL;
}


int remove_data(int v){

 node *p,*antes;

 if(ini == NULL)
 {
  return 0;
 }
 else
 {
  p = ini;
  antes = ini;
  while(p != NULL){

   if(p->value == v)
   {
     if(p == ini)
     {
       ini = ini->next;
       free(p);
       return 1;
     }
     else
     {
      antes->next = p->next;
      free(p);
      return 1;
     }
   }
   else
   {
     antes = p;
     p = p->next;
   }
  }
  return 0;
 }
}
