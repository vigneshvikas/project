#include<stdio.h>
main()
{
char a[7]={'v','i','k','a','s','a','\0'},t;
int i=0;
t=a[i];
for(i=0;i<=4;i++){
//t=a[i];
a[i]=a[i+1];
}
//printf("%d",i);
a[i]=t;

for(i=0;i<=5;i++)
{
printf("%c",a[i]);
}
}
