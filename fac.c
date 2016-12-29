#include<stdio.h>
main()
{
int f,i,fa=1;
printf("enter a number");
scanf("%d",&f);
for(i=f;i>0;i--){
fa=fa*i;
}
printf("%d",fa);
}
