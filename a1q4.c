#include<stdio.h>
int main()
{
int s1,s2;
printf("Enter the number of rows of matrix: ");
scanf("%d",&s1);
printf("Enter the number of columns of matrix: ");
scanf("%d",&s2);
int a1[s1][s2];
int a2[s1][s2];
int add[s1][s2];
int sub[s1][s2];
printf("Enter the elements of matrix1: \n");
for(int i=0;i<s1;i++)
{
for(int j=0;j<s2;j++)
{ scanf("%d",&a1[i][j]);  }
}
printf("Enter elements of matrix2: \n");
for(int i=0;i<s1;i++)
{
for(int j=0;j<s2;j++)
{ scanf("%d",&a2[i][j]); }
}
for(int i=0;i<s1;i++)
{
for(int j=0;j<s2;j++)
{   add[i][j]= a1[i][j]+a2[i][j]; }
}
for(int i=0;i<s1;i++)
{
for(int j=0;j<s2;j++)
{   sub[i][j]= a1[i][j]-a2[i][j]; }
}

printf("Addition of matrices is:\n");
for(int i=0;i<s1;i++)
{
for(int j=0;j<s2;j++)
{ printf("%d ",add[i][j]); }
printf("\n");
}
printf("Subtraction of matrices is:\n");
for(int i=0;i<s1;i++)
{
for(int j=0;j<s2;j++)
{ printf("%d ",sub[i][j]); }
printf("\n");
}

return 0;
}
