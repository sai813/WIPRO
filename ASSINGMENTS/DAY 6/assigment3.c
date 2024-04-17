Question 3

#include <stdio.h>

int findEquilibrium(int arr[], int n) {
int totalSum = 0;
int leftSum = 0;
for (int i = 0; i < n; i++)
{
totalSum += arr[i];
}
for (int i = 0; i < n; i++)
{
totalSum -= arr[i];
if (leftSum == totalSum)
{
return i;
}
leftSum += arr[i];
}
return -1;
}
int main()
{
int n;
printf("Enter the size of the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter the elements of the array: ");
for (int i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
int equilibriumIndex = findEquilibrium(arr, n);
printf("Equilibrium index is: %d\n", equilibriumIndex);
return 0;
}

