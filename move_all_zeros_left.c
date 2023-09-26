/* ) Move all zeros to the left of an array while maintaining the order of other numbers.
WTD: Reorder the array by moving all zero values to the leftmost positions while ensuring
the relative order of the non-zero numbers remains unchanged.
(e.g.: I/P: [1,2,0,4,3,0,5,0]; O/P: [0,0,0,1,2,4,3,5] ) */

#include<stdio.h>

void move_all_zeros_left(int *arr,int size);

int main()
{
    int arr[] = {1,2,0,4,3,0,5,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    move_all_zeros_left(arr,size);
    printf("Array after moving all zeros to left: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}

void move_all_zeros_left(int *arr,int size)
{
    int i,j,temp;
    for(i=0; i<size; i++)
    {
        if(arr[i] == 0)
        {
            temp = arr[i];
            for(j=i-1; j>=0; j--)
            {
                arr[j+1] = arr[j];
            }
            arr[0]  = temp;
        }
    }

}