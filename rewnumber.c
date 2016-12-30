#include<stdio.h>
main(){
int a,tem,rew=0;
printf("entera a number");
scanf("%d",&a);
while(a!=0)
{
    tem=a%10;
    rew=rew*10+tem;
    a/=10;

}
printf("%d",rew);
return 0;
}
