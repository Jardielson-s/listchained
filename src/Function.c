#include<stdio.h>
#include<stdlib.h>
#include "prototypeFunction.h"




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
printf("\n\t 5- delete the value\n");

}


void print(){

  node *p;

  if(ini == NULL)
  {
    printf("\n\t----list void----\n");
    return;
  }

  p = ini;
  while(p != NULL)
  {
   printf("\n\t info = %d\n",p->value);
   p = p->next;
  }
  printf("\n\t----end list----\n");
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
