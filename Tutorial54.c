#include <stdio.h>
#include <stdlib.h>

int sum  = 34;
int* functionDangling()
{
    int a, b, sum2;
    a = 34;
    b = 364;
    sum = a + b;
    return &sum;
}

int main2()
{
    // Case 1: De allocation of a memory block
    int *ptr= (int *) malloc(7* sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr); // ptr is now a dangling pointer

    // Case 2: Function returning local varibale address
    int * dangPtr = functionDangling(); // dangPtr is now a dangling pointer

    int * danglingPtr3;
    //Case 3: If a variable goes out of scope
    {
        int a = 12;

        danglingPtr3 = &a;  
    }
    // Here variable a gose out of scope whice means danglingPtr3 is pointing is to a location whice is freed and hence danglingPtr3 is now a dangling pointer 

    return 0;
}