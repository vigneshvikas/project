#include<stdio.h>
#include<string.h>
int pr(int prim)
{
    int a=0,i,j,b=0;

for(i=1;i<=prim;i++)
{
    for(j=1;j<=prim;j++)
    {

        b=i*j;
        if(b==prim)
        {
            a++;
        }
    }
}

return a;
}
main()
{
int prim,an,prim2;
printf("enter a number");
scanf("%d",&prim);
an=pr(prim);
if(an==2){
    printf("it is prim");

}
else{
    printf("not prime");
}
//printf("%d",an);
}

