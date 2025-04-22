#include<conio.h>
#include<stdio.h>

int main()
{
    int n,i,sum=0,a[n];
    printf("Enter the number of elements \n");
    scanf("%d",&n);
    printf("Enter the numbers for the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
int *ptr = a;
for(i=0;i<n;i++)
{
    sum=sum + *(ptr+i); //The address of the numbers in the array changes by 4bytes hence the i in the bracket and it starts from 0 so the first value is also added
}
printf("The sum of the elements in the array is =%d",sum);
getch();
return 0;
}