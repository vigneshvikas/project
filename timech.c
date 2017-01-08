#include<stdio.h>
//#include<string.h>
main()
{
int hour[2],min[2],h=0,m=0,h1=0,m1=0,h11=0,i,ans=0;
for( i=0;i<2;i++)
{
    scanf("%d%d",&hour[i],&min[i]);
}
for(i=0;i<2;i++){
    h=hour[i]-h;
    m=min[i]-m;
}
//int a=2,b=3;
h1=abs(h);
m1=abs(m);
h11=h1*60;
ans=h11+m1;
printf("%d",ans);    ;

}


