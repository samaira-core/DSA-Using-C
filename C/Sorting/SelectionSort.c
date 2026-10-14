#include <stdio.h>
void readArray(int a[], int n)
{
    int i;
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
void selectionSort(int a[], int n)
{
    int i, j, minIndex, temp;
    for(i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
}
void printArray(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[50], n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    readArray(a, n);
    selectionSort(a, n);
    printf("Elements after Sorting: ");
    printArray(a, n);

    return 0;
}