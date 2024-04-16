/*
2. Print the table with user i/ps
o/p
Table: 2

2 x 1 = 2
2 x 2 = 4
...
2 x 10 = 20
*/
#include<stdio.h>
int main()
{
    int x,i;

    printf("\nEnter the number  to find the its table: ");

    scanf("%d",&x);

    printf("\ntable for %d:\n ",x);
    printf("\n");

    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",x,i,x*i);
    }
   return 0;
}