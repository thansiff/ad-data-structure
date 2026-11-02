#include <stdio.h>

#define SIZE 10

int hashTable[SIZE];

void initTable()
{
    for (int i = 0; i < SIZE; i++)
    {
        hashTable[i] = -1;
    }
}

int hashFunction(int key)
{
    return key % SIZE;
}

void insert(int key)
{
    int index = hashFunction(key);
    int originalIndex = index;

    while (hashTable[index] != -1)
    {
        index = (index + 1) % SIZE;

        if (index == originalIndex)
        {
            printf("Hash Table is Full!\n");
            return;
        }
    }

    hashTable[index] = key;

    printf("Inserted %d at index %d\n", key, index);
}

void displayTable()
{
    printf("\n--- Hash Table Contents ---\n");

    for (int i = 0; i < SIZE; i++)
    {
        if (hashTable[i] != -1)
        {
            printf("Index %d: %d\n", i, hashTable[i]);
        }
        else
        {
            printf("Index %d: Empty\n", i);
        }
    }

    printf("---------------------------\n");
}

int main()
{
    initTable();

    insert(12);
    insert(22);
    insert(42);
    insert(15);

    displayTable();

    return 0;
}
