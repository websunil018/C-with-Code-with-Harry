#include <stdio.h>    

 int main()
 {
     //printf ("Hello world ") ;
    int marks[2][4] = {{4,44,14,34},
                        {3,2,3,3}};
                        
    // for (int i = 0; i < 4; i++)
    // {
       // printf("Enter the value of %d element of the arry\n", i);
      //  scanf("%d", &marks[i]);
    // }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; i < 4; j++)
        {
            /* code */
        
        
        //printf("The value of %d,%d element of the arry is%d\n", i, j, marks[i]);
          printf("%d", marks[i][j]);
        }
        printf("\n");
     }
     
     //marks[0] = 34;
     //printf("Marks of student 1 is %d\n", marks[0]);
     //marks[0] = 4;
    //marks[1] = 44;
    //marks[2] = 14;
    //marks[3] = 34;
    //printf("Marks of student 1 is %d\n", marks[0]);

    
    return 0;  
 }