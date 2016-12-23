#include<stdio.h>
#include<string.h>
main()
{
int a;
printf("enter a year");
scanf("%d",&a);
if((a%4==0) && (a%100!=0) || (a%400==0))
{

    printf("it is leap year");
}
else{
    printf("it is not leap year");
}
return 0;
}
