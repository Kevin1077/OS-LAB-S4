#include<stdio.h>
void main()
{
   int time_quantum,lim;
   printf("Enter the time quantum:\n");
   scanf("%d",&time_quantum);
   printf("Enter the number of process:\n");
   scanf("%d",&lim);
   int i,p[lim],b[lim],wt[lim],tat[lim],rt[lim],flag=0,total=0;
   printf("Enter the process ID and burst time:\n");
   for(i=0;i<lim;i++)
   {
      scanf("%d%d",&p[i],&b[i]);
      rt[i]=b[i];
   
   }
   while(flag<lim)
   {
     for(i=0;i<lim;i++)
     {
       if(rt[i]>0)
       {
         if (rt[i] > time_quantum) {
                    total += time_quantum;
                    rt[i] -= time_quantum;
                } else {
                    total += rt[i];
                    wt[i] = total- b[i]; 
                    rt[i] = 0;
                    flag++;
                    tat[i] = total;
                }
                 }
     }
   }
                float tot_wt,tot_tat;
                printf("process\tbt\twt\ttat\n");
                for(i=0;i<lim;i++)
                {
                  printf("%d\t%d\t%d\t%d\n",p[i],b[i],wt[i],tat[i]);
                  tot_wt+=wt[i];
                  tot_tat+=tat[i];
                }
      
   printf("Average weighting time=%2f\nAverage turnAroundTime=%2f\n",tot_wt/lim,tot_tat/lim);
}
