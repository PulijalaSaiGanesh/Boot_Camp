#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9};
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        if(a[i] == n)
        {
            printf("The element %d is present at index %d\n", n, i);
            break;
        }
        else if(i == n-1)
        {
            printf("The element %d is not present in the array\n", n);
        }
    }
}