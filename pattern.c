/*
        Pattern Printing Problem
*/


#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d",i);
        }
        if (i!=n) printf("\n");
    }
    printf ("%d",i-1);
    return 0;
}
