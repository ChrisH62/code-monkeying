#include <stdio.h>

//void binSearch(int array[], int length, int query);
void binary_search(int array[], int query, int L, int R);
int main(void)
{
    int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);
    int search;
    printf("Enter a number to search for: ");
    scanf("%d", &search);
    //binSearch(numbers, arraySize, search);
    binary_search(numbers, search, arraySize - arraySize, arraySize);
}

// Help from a tutorial
void binary_search(int array[], int query, int L, int R)
{
    int mid = L + (R - L) / 2;
    if(L > R)
    {
        printf("%d Was not found...\n", query);
        return;
    }
    if (array[mid] == query)
    {
        printf("Found: %d\n", query);
        return;
    }
    else if (array[mid] > query)
/*return*/ binary_search(array, query, L, mid -1);
    
    else
        binary_search(array, query, mid + 1, R);

}

// My initial attempt

/*void binSearch(int array[], int length, int query)
{
    int middle = length/2;
    if (length == 0)
    {
        printf("Query %d was not found", query);
        return;
    }
    else if (query == array[middle])
    {
        printf("Found %d in array.", query);
        return;
    }
    else if (query < array[middle])
    {
        int leftArray[] = array;
        binSearch(leftArray, middle, query);
    }
}*/