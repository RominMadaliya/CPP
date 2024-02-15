#include<stdio.h>
#define n 8

int a[n], top=-1;

    int display()
{
    if(top < 0)
    printf("array is empty");
    else{
        for(int i=0; i<=top; i++)
        {
            printf("%d\n",a[i]);
        }
    }
    printf("\n");
}

int insertend(int val)
{
    if(top >= n-1)
    {
    printf("array is full \n");
  
  }else{
    top++;
    a[top]=val;
  }
}

int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);
    insertend(60);
    insertend(70);
    insertend(80);
    insertend(90);
    insertend(100);
    display();
}
