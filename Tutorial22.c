#include <stdio.h>
float kmstomiles(float kms);//for  kms to miles
float inchestofoot(float inch);//for inches to foot
float cmstoinches(float cms);//for cms to inches
float poundtokgs(float pound);//for pound to kgs
float inchtometer(float inch);//for inches to meters

int main()
{
    int choose;
    float kms, inch, cms, pound;
    label:
    printf("Which kind of conversion do you want to do\n");
    printf("1..kms to miles\n");
    printf("2..inches to foot\n");
    printf("3..cms to inches\n");
    printf("4..pound to kgs\n");
    printf("5..inches to meters\n");
    scanf("%d",&choose);
    switch(choose)
    {
        case 1:    //kms to miles
            printf("You want to convert kms to miles\nEnter kms\n");
            scanf("%f",&kms);
            printf("%12.10f Miles in %f kms\n\n", kmstomiles(kms),kms);
            break;

        case 2://for inches ti foot
            printf("You want to convert inches to foot\nEnter inches\n");
            scanf("%f",&inch);
            printf("%12.10f feet in %f inches\n\n", inchestofoot(inch),inch);
            break;

        case 3://for cms to inches
            printf("You want to convert cms to inches \nEnter cms\n");
            scanf("%f",&cms);
            printf("%12.10f inches in %f cms\n\n", cmstoinches(cms),cms);
            break;        
        case 4://for pound to kgs
            printf("You want to convert pound to kgs \nEnter pound\n");
            scanf("%f",&pound);
            printf("%12.10f kgs in %f pounds\n\n", poundtokgs(pound), pound);
            break;
        case 5://for inches to meters
            printf("You want to convert inches to meters \nEnter inches\n");
            scanf("%f",&inch);
            printf("%12.10f meters in %f inches\n\n", inchtometer(inch),inch);
            break;
        default:
            printf("You entered wrong entry\nChoose the right number\n\nxxxxxxxxxxxxxxxxxxxx\n\n");

    }
    goto label;
    return 0;
}

float kmstomiles(float kms)
{
    float i;
    i=(kms*0.62137);
    return i;
}
float inchestofoot(float inch)
{
    float i;
    i=(inch*0.0833333333);
    return i;
}
float cmstoinches(float cms)
{
    float i;
    i=(cms*0.393700787);
    return i;

}
float poundtokgs(float pound)
{
    float i;
    i=(pound*0.45359237);
    return i;

}
float inchtometer(float inch)
{
    float i;
    i=(inch*0.0254);
    return i;

}