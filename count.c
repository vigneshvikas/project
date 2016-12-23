#include<stdio.h>
#include<string.h>
main()
{
int a=7564,count=0;
while(a!=0)
{
    a/=10;
    count++;
}
printf("%d",count);
return 0;
}
