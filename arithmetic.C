#include<stdio.h>
int main()
{
int a,d,n,i,sum=0;
printf("\nEnter t he number of terms:");
scanf("%d",&n);
printf("\nEnter the first term:");
scanf("%d",&a);
printf("\nEnter the difference:");
scanf("%d",&d);
for(i=0;i<n;i++)
{
sum=sum+a;
a=a+d;
}
printf("%d",sum);
return 0;
}
