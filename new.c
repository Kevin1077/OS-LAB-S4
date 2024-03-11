#include<stdio.h>
#include<unistd.h>
int main()
{
int i;
printf("I am the program called by the first process");
for(i=1;i<10;i++)
{
printf("%d*%d\n",i,i);
}
return 0;
}

