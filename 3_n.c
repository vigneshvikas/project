#include<stdio.h>
#include<string.h>
main()
{
int a[3],max=-11,i;
printf("enter three number");
for(i=0;i<3;i++)
{

    scanf("%d",&a[i]);
}
for(i=0;i<3;i++)
{

    if(max<a[i])
        max=a[i];
}
printf("largest n.o:%d",max);
return 0;
}
