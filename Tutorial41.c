#include <stdio.h>
#include <stdio.h>

// void parser


int main()
{
    char string[] = "<h1> this is a heding </h>";
    parser(string);
    return 0;
}
/*
Input:
<h1> This is a heding </h1>

Output:
This is a heading

Input:
<span> This is a heding2 </span>

Output:
This is a heading2

