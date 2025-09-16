#include<stdio.h> 
int main()
{ //printf("30");
int a=40,b=20,ans;
printf("Enter Two Numbers");
scanf("%d %d",&a,&b);// To accept input form uer.

ans=a+b;
printf("\na=%d b=%d ans=%d",a,b,ans); // \n is used to move data in another line.
ans=a-b;
printf("\na=%d b=%d \tans=%d",a,b,ans); // \t is used to give wide space. 
ans=a*b;
printf("\na=%d b=%d ans=%d",a,b,ans); // \n \t etc they are called as escape sequence.
ans=a/b;
printf("\na=%d b=%d ans=%d",a,b,ans);
}


