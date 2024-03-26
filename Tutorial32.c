#include <stdio.h>

int func1(int array[1])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n", i, array[1]);
    }
    // array[0] = 382; // Very important point that if you change any value here, it gets reflected in main()

    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 6534;
}

void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; i < 2; i++)
        {
            printf("the value at %d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main()
{
    int arr[][2] = {{2,13}, {9,3,}};
    // printf("The value ar index 0 is %d\n", arr[0]);
    // func1(arr);
    // printf("The value ar index 0 is %d\n", arr[0]);
    // func2(arr);
    // func2(arr);
    func3(arr);
    return 0;
}