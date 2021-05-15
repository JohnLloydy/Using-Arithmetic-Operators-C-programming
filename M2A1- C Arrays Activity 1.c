#include <stdio.h>
#define SIZE 10
 
// Function declaration
int sum(int arr[], int start, int len);
 
 
int main()
{
    int arr[SIZE];
    int x, num, i, sumofarray;
 
 
    // size and elements in array
    printf("size of array: ");
    scanf("%d", &num);
    
    for(i=0; i<num; i++)
    {
        x=1+x;
		printf("Elements %d: ",x);
		scanf("%d", &arr[i]);
    }
 
 
    sumofarray = sum(arr, 0, num);
    printf("Sum of all array elements: %d", sumofarray);
 
    return 0;
}
 
int sum(int arr[], int start, int len)
{
    if(start >= len)
        return 0;
 
    return (arr[start] + sum(arr, start + 1, len));
}