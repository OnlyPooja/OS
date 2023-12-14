#include<stdio.h>
int main()
{
    int arrival[10],burst[10];
    int n,i;
    printf("enter number of process\n");
    scanf("%d",&n);
    printf("enter the arrival time\n");
    for( i=0;i<n;i++)
    {
        scanf("%d",&arrival[i]);
    }
    printf("enter the burst time \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&burst[i]);
    }
     float stat=0,sat=0;
     int time=0;
    while(1){
    
    int smallest=-1;
   
    for(i=0;i<n;i++)
    {
        if(arrival[i]<=time && burst[i]>0 && (smallest==-1 || burst[i]<burst[smallest]))
        {
            smallest=i;
        }
    }
        if(smallest==-1)
        break;
        stat+=time+burst[smallest]-arrival[smallest];
        sat+=time-arrival[smallest];
        time+=burst[smallest];
        burst[smallest]=0;

    }
    printf("\nAverage waiting time = %f", stat * 1.0 / n);
    printf("\nAverage turnaround time = %f\n", sat * 1.0 / n);
}