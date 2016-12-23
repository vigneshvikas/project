#include<stdio.h>
#include<string.h>
main()
{
char a;
printf("enter a name:\n");
scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
    printf("it is vowel");
}
else{
    printf("consonat");
}
return 0;
}
