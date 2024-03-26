#include <stdio.h>

int myfunce(int a, int b)
{
    // auto int myVar;
    static int myVar;
    myVar ++;
    printf("The myVar is %d\n", myVar);

    //myVar = a+b;
    return myVar;
}
int main()
{
    // Declaration - Telling the compiler about the varibale (No space reseved)
    // Definition - Declaration + space reservation
    register int myVar = myfunce(3, 5);
    myVar = myfunce(3, 5);
    myVar = myfunce(3, 5);
    myVar = myfunce(3, 5);
    myVar = myfunce(3, 5);
    //printf("The myVar is %d\n", myVar);

    return 0;
}