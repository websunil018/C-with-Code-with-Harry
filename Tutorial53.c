#include <stdio.h>
int main()
{
    int a = 34;
    int * ptr = NULL;
    if (ptr != NULL){
    printf("The sddress of a is %d\n", ptr);
    }
    else{
        printf("THe pointer is a null pointer and cannot be dereferenced");
    }
    
    return 0;
}