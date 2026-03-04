#include<stdio.h>
//int i=1,result=0;
int bineq(int n)
{
static int i=1,result=0;
if(n!=0)
{
result=result+ i*(n%2);
i=i*10;
bineq(n/2);}
return result;
}
int main()
{
int num;
printf("Enter positive intger: ");
scanf("%d",&num);
if(num<0) {printf("Invalid number"); return 0;}
printf("Binary equivalent is %d\n",bineq(num));
return 0;
}
