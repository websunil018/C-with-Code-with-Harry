#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d: Enter the number of character in your Employee ID\n", i+1);
        scanf("%d", &chars);
        getchar();
        printf("Enter the value of a\n");
        scanf("%c", &a);
        getchar();
        
        printf("Enter the value of b\n");
        scanf("%c", &b);
        ptr = (char *) malloc((chars+1)*sizeof(char));
        printf("Enter your Empolyee ID\n");
        scanf("%s", ptr);
        printf("Ypur Empolyee ID is %s\n",ptr );
        free(ptr);
        i = i + 1;
    }
    
    return 0;
}