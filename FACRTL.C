#include <stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    int f=1;
    printf("enter the number");
    scanf("%d",n);
    if(n<0)
    {
        printf("no fact for negative num");
    }    
    else
    {
       for(i=0;i<n;i++)
       {
          f=f*i;
       }
       printf("factorial is %d",f);
       return(0);
    } 
}
