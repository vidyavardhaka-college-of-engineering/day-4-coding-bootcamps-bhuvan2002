//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int arr[10], n, i, small,large;
    printf("Enter the number of elements in an array \n");
    scanf("%d", &n);
    printf("Enter the elements in an array \n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    small = arr[0];
    large = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
        
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    printf("The Largest Number in an array is %d \n", large);
    printf("The smallest element in a array is %d", small);


    //Write your code here
  
    return 0;
}
