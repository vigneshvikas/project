#include<stdio.h>
main(){
int a,i,m=0;
printf("enter multiplication table do you want:\t");
scanf("%d",&a);
for(i=1;i<=10;i++){
m=a*i;
printf("\n%d*%d=%d",a,i,m);
}
return 0;
}
