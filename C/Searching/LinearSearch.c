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
void linearSearch(int a[], int n, int x)
{
    int i, found = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
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
    linearSearch(a, n, x);

    return 0;
}
