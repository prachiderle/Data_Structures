#include<stdio.h>

#pragma pack(1)
struct node
{
    int data;
    struct  node *next;

};

typedef struct node NODE;                          // will replace the struct node as NODE 

int main()
{
   //struct node obj;

   NODE obj ;
   printf("%d\n",sizeof(obj));

   return 0;

}