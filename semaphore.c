#include<stdio.h>
#include<stdlib.h>
int mutex=1,full=0,empty=3;
void producer();
void consumer();
int wait(int s);
int signal(int s);
void main()
{
  int choice;
  do{
  printf("Enter the choice\n");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
    if(mutex==1&&empty!=0)
    {
      producer();
      printf("produced item sucessfully\n");
    }
    else{
     printf("Buffer is full\n");
    }
    break;
    case 2:
    if(mutex==1&&full!=0)
    {
      consumer();
      printf("consumed item sucessfully\n");
    }
    else
    {
      printf("Buffer is empty\n");
    }
    break;
    case 3:
     exit(0);
     break;
  }
  }while(choice!=3);
}
void producer()
{
   mutex=wait(mutex);
   full=signal(full);
   empty=wait(empty);
   mutex=signal(mutex);
}
void consumer(){
  mutex=wait(mutex);
  full=wait(full);
  empty=signal(empty);
  mutex=signal(mutex);
}
int wait(int s)
{
  s--;
  return s;
}
int signal(int s)
{
  s++;
  return s;
}

