#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 10

typedef struct
{
    int buffer[10];
    int head;
    int tail;
} buf;

int isBufFull(buf* q)
{
    if((q->head)==0&&(q->tail==0))
    return -1;
    
    if((q->head)&(q->tail))
    {
        return 1;
    }
    
    return 0;
}

int insertData(buf* q,int data)
{
    q->buffer[q->head] = data;
    q->head = (q->head+1) % BUF_SIZE;
}

int deleteData(buf* q)
{
    int data = q->buffer[q->tail];
    q->tail = (q->tail+1) % BUF_SIZE;
    return data;
}

int main()
{
  buf *q= (buf*)malloc( BUF_SIZE * sizeof(buf));
  q->head=0;
  q->tail=0;
   
   insertData(q,10);
   insertData(q,11);
   insertData(q,12);
   insertData(q,13);
   insertData(q,14);
   insertData(q,15);
   insertData(q,16);
    insertData(q,17);
   insertData(q,18);
   
   deleteData(q);
   deleteData(q);
   deleteData(q);
   deleteData(q);
   deleteData(q);
   deleteData(q);
   
   
  
   insertData(q,19);
   insertData(q,20);
   insertData(q,21);
   insertData(q,22);
   
   for(int i=q->head%10;i<q->tail%10;i++)
   {
       printf(" %d",q->buffer[i]);
   }
   
   
   
} 
