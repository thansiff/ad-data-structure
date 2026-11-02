#include <stdio.h>

int main()
{
    int a[100], i, n, pos, element, found;

    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    if (n <= 0 || n >= 100)
    {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Traversal
    printf("\nThe elements of the array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    // Insertion
    printf("\nEnter the position and element to be inserted:\n");
    scanf("%d %d", &pos, &element);

    if (pos < 1 || pos > n + 1 || n >= 100)
    {
        printf("Insertion not possible\n");
    }
    else
    {
        for (i = n; i >= pos; i--)
        {
            a[i] = a[i - 1];
        }

        a[pos - 1] = element;
        n++;

        printf("\nArray after insertion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", a[i]);
        }
    }

    // Deletion
    printf("\nEnter the position to be deleted:\n");
    scanf("%d", &pos);

    if (pos < 1 || pos > n)
    {
        printf("Deletion not possible\n");
    }
    else
    {
        for (i = pos - 1; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        n--;

        printf("\nArray after deletion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", a[i]);
        }
    }

    // Search
    printf("\nEnter the element to be searched:\n");
    scanf("%d", &element);

    found = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] == element)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Element not found\n");
    }

    // Update
    printf("\nEnter the position and element to be updated:\n");
    scanf("%d %d", &pos, &element);

    if (pos < 1 || pos > n)
    {
        printf("Update not possible\n");
    }
    else
    {
        a[pos - 1] = element;

        printf("\nArray after update:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}
