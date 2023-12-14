#include<stdio.h>
int n,mutex=1,empty=3,full=0,x=0;
int signal(int s)
{
    return ++s;
}
int wait(int s)
{
    return --s;
}
void producer()
{
    mutex=wait(mutex);
    full=signal(full);
    empty=wait(empty);
    mutex=signal(mutex);
    x++;
    printf("producer has produces\n");
}
void consumer()
{
    mutex=wait(mutex);
    full=wait(full);
    empty=signal(empty);
    mutex=signal(mutex);
    x--;
     printf("producer has consumed\n");
}
int main()
{
    
    void producer();
    void consumer();
    int signal(int);
    int wait(int);
    printf("enter your choice\n");
    printf("enter 1 for producer\n 2 for consumer \n 3 for exit\n");
  
    while(1)
    {
          scanf("%d",&n);
        switch(n)
        {
        case 1:
        if(mutex==1 && empty!=0)
        {
            producer();
        }
        else
        {
            printf("buffer is full\n");
           
        }
         break;
        case 2:
        if(mutex==1 && full!=0)
        {
            consumer();
        }
        else
        {
            printf("buffer is empty\n");
            
        }
        break;
        case 3:
        printf("exit\n");
        exit(0);
        
        }
    }
}