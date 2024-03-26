#include <stdio.h>

int main()
{

 char input;
 float kmsToMiles = 0.621371;
 float inchesToFoot = 0.0833333;
 float cmsToInches = 0.393701;
 float poundToKgs = 0.453592;
 float inchesToMeters = 0.0254;

 while (1)
 {
    printf("Enter the input character. q to quit1. kms to miles2. inches to foot3. cms to inches4. pound to kgs5.inches to meters");
    scanf("%c", &input);
    {
   case 'q':
   printf("Quitting the program...");
   goto end;
   break;
   
   case '1':
   printf("Enter quantiy in terms of first unit\n");
   scanf("%f", &first);
   printf("Enter the terms of second unit\n");
   scanf("%f", %second);
   printf("%f is equal to %f \n", first, second);
      default;
           break;
    }
 }
 end;
    return 0;
}