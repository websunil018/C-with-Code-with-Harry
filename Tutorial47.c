#include <stdio.h>
#include <stdlib.h> //

int main()
{
    // Use of malloc
    // int* ptr;
    // int n;
    // printf("Enter the size of the array you want to create\n");
    // scanf("%d",&n);

    // ptr = (int *) malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //      printf("Enter the value no %d of this array\n", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for (int i = 0; i < n; i++)
    //{
    //  printf("The value at %d of this array is %d\n", ptr[i]);
    // }

    // Use of calloc
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d",&n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of this array\n", i);
        scanf("%d", &ptr[i]);    
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", ptr[i]);
    }

    // Use of ralloc
    int *ptr;
    int n;
    printf("Enter the size of the new array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)ralloc(ptr, n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the nw value no %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", ptr[i]);
    }

    return 0;
}