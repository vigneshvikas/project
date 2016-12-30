#include<stdio.h>
main(){
char a;
printf("enter a roman");
scanf("%c",&a);
switch(a)
{
case 'X':
    printf("10");
    break;
case 'I':
    printf("1");
    break;
case 'V':
    printf("5");
    break;

default:
    printf("enter roman only (X I V)");
}
}
