#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0;i < n; i++)
    {
        printf("Enter a value: ");
        scanf("%d", &a[i]);
    }

    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);

    int first = 0, last = n-1;
    for(int i = 0; i < n; i++)
    {
        int mid = last + (first + last) / 2;
        if(a[mid] == key)
        {
            printf("The element %d is present at index %d\n", key, mid);
            break;
        }
        else if(a[mid] < key)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    return 0;
}