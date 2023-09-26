/* Remove duplicates from an array without using any library.
WTD: Navigate through the array, identifying and removing any repetitive occurrences of
numbers, ensuring each number appears only once.
(e.g.: I/P: [1,1,2,2,3,4,4]; O/P: [1,2,3,4]) */

#include<stdio.h>

void remove_duplicates(int *arr,int n);

int main()
{
    int arr[50];
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",(arr+i));
    }
    remove_duplicates(arr,n);
    return 0;
}
void remove_duplicates(int *arr,int n)
{
    int size=n,i,j,k;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
         if(arr[i] == arr[j])
         {
            for(k=j; k<n; k++)
            {
                arr[k] = arr[k+1];
            }
            n--;
         }
        }
    }
    printf("Array after removing the duplicates: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",*(arr+i));
    }
}