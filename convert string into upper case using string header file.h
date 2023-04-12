//convert string into upper case.
#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    printf("enter string:");
    gets(a);
    strupr(a);
    printf("uppercase string:%s",strupr(a));
}

