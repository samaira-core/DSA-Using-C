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
void insertionSort(int a[], int n)
{
    int i, j, x;
    for(i = 1; i < n; i++)
    {
        x = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > x)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
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
    insertionSort(a, n);
    printf("Elements after Sorting: ");
    printArray(a, n);

    return 0;
}