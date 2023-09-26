/*
Determine the intersection of two integer arrays.
WTD: Compare every element of the two arrays, listing down the common integers that
appear in both.
(e.g.: I/P: [1,2,4,5,6], [2,3,5,7]; O/P: [2,5])*/

#include<stdio.h>

void compare_two_arr(int *arr1,int *arr2,int size1,int size2);

int main()
{
    int arr1[50],arr2[50];
    int size1,size2,i;
    printf("Enter the size of array1 :");
    scanf("%d",&size1);
    printf("Enter the elements of array1: ");
    for(i=0; i<size1; i++)
    {
        scanf("%d",(arr1+i));
    }
    printf("Enter the size of array2 :");
    scanf("%d",&size2);
    printf("Enter the elements of array1: ");
    for(i=0; i<size2; i++)
    {
        scanf("%d",(arr2+i));
    }
    compare_two_arr(arr1,arr2,size1,size2);
    return 0;
}
void compare_two_arr(int *arr1,int *arr2,int size1,int size2)
{
    int i,j,k=0;
    int res_arr[50];
    for(i=0; i<size1; i++)
    {
        for(j=0; j<size2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                res_arr[k++] = arr1[i];
            }
        }
    }
    printf("Intersestion of two arrays: ");
    for(i=0; i<k; i++)
    {
        printf("%d ",*(res_arr+i));
    }
}