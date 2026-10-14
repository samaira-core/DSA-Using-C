#include <stdio.h>

void readArray(int a[], int n)
{
    int i;
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void binarySearch(int a[], int n, int x)
{
    int l = 0, r = n - 1, mid;
    int found = 0;
    while(l <= r)
    {
        mid = (l + r) / 2;

        if(a[mid] == x)
        {
            printf("Element found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if(x < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }
}

int main()
{
    int a[50], n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    readArray(a, n);
    printf("Enter element to search: ");
    scanf("%d", &x);
    binarySearch(a, n, x);

    return 0;
}
