/*
Q1. rotate array every kth element


i/p
1 2 3 4 5 6 7 8 9
k= 3
o/p
3 2 1 6 5 4 9 8 7

i/p
1 2 3 4 5 6 7 8 9
k= 4
o/p
4 3 2 1 7 6 5 4 9 8
*/
#include <stdio.h>
#define size 9
int main()
{
    int arr[size];
    int x,i,temp,start,end;
    //int size = sizeof(arr) / sizeof(arr[0]); 

    printf("\nEnter elements in the array: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("\nEnter a number: ");
    scanf("%d",&x);
    for(i=0;i<size;i=i+x)
    {
        start = i;
        end =(i+x-1<size) ? i+x-1 : size-1;

        while(start< end)   //fro reversing
        {
            temp=arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    printf("\nrotated array: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
