#include<stdio.h>
int main()
{
    int n=9;
    int count =0;
    while (n!=1)
    {

        if(n/2==0)
        {   n=n/2;
            count++;
        }
        else if(n/2!=0)
        {
             n=3*n+1;
             count++;
        }
    }
    printf("%d",&count);
}
