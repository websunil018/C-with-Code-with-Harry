#include <stdio.h>

int main()
{
    int maeks;
    printf("Enter your age\n");
    scanf("%d", &age); 
     
    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch(marks)
        {
            case 45:
            printf("your marks are 45\n");
    
    default:
           
        break;
    }

    switch (age)
    {
    case 3:
        printf("The ageis 3\n");
        break;

    case 13:
        printf("The ageis 13\n");
        break;

        case 23:
        printf("The ageis 23\n");
        break;

    default:
        printf("Age is not 3, 13 or 23");
       
    }



}