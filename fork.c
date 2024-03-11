#include<stdio.h>
#include <unistd.h>
void main(){
 int pd;
 pd = fork();
 if(pd==0)
 {
   printf("This is child process\nThe process ID is %d\nParent ID is %d\n",getpid(),getppid());
   int num,i;
   printf("Enter a limit:\n");
   scanf("%d",&num);
   for(i=1;i<=num;i++)
   {
      printf("%d\t",i);
   }
   printf("\n");
 }
 else if(pd>0)
 {
   wait();
   printf("This is parent process\nThe process ID is %d\n",getpid());
   int num;
   printf("Enter a number:\n");
   scanf("%d",&num);
   if(num%2==0)
   {
     printf("%d is even\n",num);
   }
   else
   {
     printf("%d is odd\n",num);
   }
 }
 else
 {
   printf("Fork Failed!!!");
 }
}
