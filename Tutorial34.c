#include <stdio.h>

void printStr(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    //char str[] = {'s','u','n','i','l','\0'};
    //char str[6] = "sunil";
    char str[34];
    gets(str);
    printf("Using custom fuction printStr\n");
    printStr(str);
    printf("Using printf %s\n", str);
    printf("Using puts: \n");
    puts(str);
    return 0;
}