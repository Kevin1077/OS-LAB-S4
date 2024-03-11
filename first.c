#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main()
{
char *args[]={"./ex",NULL};
execvp(args[0],args);
printf("End");
}
