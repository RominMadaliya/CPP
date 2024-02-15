#include<stdio.h>
#include<stdlib.h>
int leniar_search()
{
    int a[50],i,b;
    for(i=0;i<20;i++)
    {
        a[i] = rand() %50;
        printf("%d ",a[i]);
    }
    printf("enter number : ");
    scanf("%d",&b);
    for(i=0;i<20;i++)
    {
        if(a[i]==b)
        
        {
            printf("%d ",i);
            
        }
       if(i == 20)
       {
         printf("sorry .................this value not ");
       }
       
    }
}    
int main()
{
    leniar_search();
}