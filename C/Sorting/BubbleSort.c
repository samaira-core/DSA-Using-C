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
void bubbleSort(int a[], int n)
{
    int p, j, temp, f;

    for(p = 0; p < n - 1; p++)
    {
        f=0;
        for(j = 0; j < n-1-p; j++)
        {
            if(a[j] > a[j + 1])
            {
                f=1;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        if(f==0)
            break;  
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
    bubbleSort(a, n);
    printf("Elements after Sorting: ");
    printArray(a, n);

    return 0;
}