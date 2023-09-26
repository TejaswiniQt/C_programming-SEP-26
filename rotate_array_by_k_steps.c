/* Rotate an array to the right by k steps.
WTD: Modify the array by moving its elements to the right, wrapping them around when
they reach the end, for a specified number of steps.
(e.g.: I/P: [1,2,3,4,5], k=2; O/P: [4,5,1,2,3] ) */

#include<stdio.h>

void rotate_arr_to_right(int *arr,int n,int steps);

int main()
{
    int arr[50];
    int n,i,steps;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",(arr+i));
    }
    printf("Enter the number of shitfs: ");
    scanf("%d",&steps);
    rotate_arr_to_right(arr,n,steps);
    printf("Array after rotating: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}

void rotate_arr_to_right(int *arr,int n,int steps)
{
    int count=0,temp,i;
    while(count < steps)
    {
        temp = arr[n-1];
        for(i=n-1; i>0; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
        count++;
    }
}