/*
problem Statement:
Given an unsorted array a of size N of non-negative integers,
find a continuous sub-array which adds to a given number sum.
*/

#include<stdio.h>

int main()
{
    int n,i,a[20],sum,start=0,end=0,value=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nsum =");
    scanf("%d",&sum);
    while(end<n)
    {
        if(value==sum && value != 0)
        {
            printf("sum found between indexes %d and %d\n",start+1,end);
            return 0;
        }
        if(value<sum)
        {  end++;
            if(end<n)
                value += a[end];
        }
        else 
        {
            value -= a[start];
            start++;
        }
            
    }
    printf("no subarray found\n");
    return 0;

}