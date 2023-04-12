//WAP to convert string into upper case.
#include<stdio.h>
void main()
{
    char a[20];
    int i;
    printf("enter string:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=97 && a[i]<=123)
        {
            a[i]=a[i]-32;
        }
    }
    printf("\n upper case string:%s",a);
}
