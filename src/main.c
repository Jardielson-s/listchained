#include<stdio.h>
#include "Function.c"
#include<stdlib.h>



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
      printf("\n\t element not insert\n");
     }
     else
     {
      printf("\n\t element insert\n");
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
     if(aux1 != 0)
      printf("\n\t value found info = %d\n",*aux1);
     else
      printf("\n\t value ot found\n");
     break;
   case 5:
     printf("\n\t type it value:\t");
     scanf("%d",&v);
     aux = remove_data(v);
     if(aux == 1)
      printf("\n\t value deleted\n");
     else
      printf("\n\t value not found\n");
     break;
  }
 }while(op != 0);

return 0;
}

