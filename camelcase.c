#include<stdio.h>
#include<string.h>
main()
{
char name[20],i,n=0;
printf("enter a name");
scanf("%s",name);
n=strlen(name);
for(i=0;i<n;i++)
{
    if(i==0){
        printf("%c",name[i]-32);
    }
    else
    {
    printf("%c",name[i]);
    }
}

}

