#include<stdio.h>
void main()
{
   int lim,i;
   printf("Enter the number of process\n");
   scanf("%d",&lim);
   int process[lim],bt[lim],wt[lim],tat[lim];
   printf("Enter the process no and burst time\n");
   for(i=0;i<lim;i++)
   {
     scanf("%d%d",&process[i],&bt[i]);
   }
   wt[0]=0;
   tat[0]=bt[0];
   
   float tot_wt=wt[0],tot_tat=bt[0];
   
   for(i=1;i<lim;i++)
   {
      wt[i]=wt[i-1]+bt[i-1];
      tat[i]=tat[i-1]+bt[i];
      tot_wt=tot_wt+wt[i];
      tot_tat=tot_tat+tat[i];
   }
   
   printf("process\tbt\twt\ttat\n");
   for(i=0;i<lim;i++)
   {
      printf("%d\t%d\t%d\t%d\n",process[i],bt[i],wt[i],tat[i]);
      
   }
   printf("Average weighting time=%f\nAverage Turn Around Time=%f\n",tot_wt/lim,tot_tat/lim);
   
}

