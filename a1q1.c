#include<stdio.h>  
int sumdiv(int n)  
{  
if (n==0) return -1;  
int sum=0;  
for(int i=2;i<n;i++)  
{  
if(n%i==0) sum+=i;}  
sum++;  
return sum;  
}  
int main()  
{  
int a,b;  
printf("Lower bound of positive range: ");  
scanf("%d",&a);  
printf("Upper bound of positive range: ");  
scanf("%d",&b);  
if(a<0 || b<0) { printf("Invalid range"); return 0;}  
printf("Perfect numbers are: ");  
for(int i=a;i<=b;i++)  
{  
if(i==sumdiv(i)) printf("%d ",i);}  
printf("\n");  
return 0;  
}