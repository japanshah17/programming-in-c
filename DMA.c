#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int n,i,sum=0;
int *ptr;

printf("enter number:");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));//memory allocation

printf("enter elements:\n");
for(i=0;i<n;++i)
{
    scanf("%d",&*ptr+i);
    sum+= *(ptr+i);

}
printf("the sum is: %d",sum);
}
