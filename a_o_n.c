#include<stdio.h>
#include<string.h>
main()
{
char n;
printf("enter a name:\n");
scanf("%c",&n);
if(isalpha(n))
{

    printf("it is alpha");
}

else
    {
    printf("it is not");
}
return 0;
}
