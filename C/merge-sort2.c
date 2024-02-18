#include <stdio.h>

void mergeSort(int array[], int length);
void merge(int leftArray[], int rightArray[], int leftSize, int rightSize , int array[]);
int main(void)
{
    int numbers[] = {6, 4, 8, 5, 0, 1, 7, 9, 3, 2, 35, 13, 31, 22, 56, 23};
    int arrayLength = sizeof(numbers)/ sizeof(*numbers);

    printf("Before: \n");
    for (int i = 0; i < arrayLength; i++)
    {
        printf("array[%d] = %d\n", i, numbers[i]);
    }
    printf("\n");
    
    mergeSort(numbers, arrayLength);
    
    printf("After: \n");
    for (int i = 0; i < arrayLength; i++)
    {
        printf("array[%d] = %d\n", i, numbers[i]);
    }
    printf("\n");
    return 0;
}

void mergeSort(int array[], int length)
{
    //size_t length = sizeof(array)/ sizeof(array[0]);
    if (length <= 1) return;

    int middle = length / 2;

    int leftArray[middle];
    int rightArray[length - middle];

    int i = 0; // Left
    int j = 0; // Right

    for(int k = 0; k < length; k++)
    {
        if (i < middle)
        {
            leftArray[i] = array[k];
            i++;
        }
        else
        {
            rightArray[j] = array[k];
            j++;
        }
    }
    int leftSize = length / 2;
    int rightSize = length - leftSize;
    mergeSort(leftArray, leftSize);
    mergeSort(rightArray, rightSize);
    merge(leftArray, rightArray, leftSize, rightSize, array);

}

void merge(int leftArray[], int rightArray[], int leftSize, int rightSize , int array[])
{
    //size_t leftSize = sizeof(leftArray) / sizeof(leftArray[0]);
    //size_t rightSize = (sizeof(array) / sizeof(array[0])) - leftSize;

    int i = 0;
    int l = 0;
    int r = 0;

    while (l < leftSize && r < rightSize)
    {
        if (leftArray[l] < rightArray[r])
        {
            array[i] = leftArray[l];
        
            i++;
            l++;
        }
        else
        {
            array[i] = rightArray[r];
            
            i++;
            r++;
        }
    }
    while (l < leftSize)
    {
        array[i] = leftArray[l];
        i++;
        l++;
    }
    while (r < rightSize)
    {
        array[i] = rightArray[r];
        i++;
        r++;
    }
}